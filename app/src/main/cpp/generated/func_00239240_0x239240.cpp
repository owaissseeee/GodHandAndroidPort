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

// Function: func_00239240
// Address: 0x239240 - 0x239570
void func_00239240_0x239240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00239240_0x239240");
#endif

    switch (ctx->pc) {
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393d8u: goto label_2393d8;
        case 0x2393dcu: goto label_2393dc;
        case 0x2393e0u: goto label_2393e0;
        case 0x2393e4u: goto label_2393e4;
        case 0x2393e8u: goto label_2393e8;
        case 0x2393ecu: goto label_2393ec;
        case 0x2393f0u: goto label_2393f0;
        case 0x2393f4u: goto label_2393f4;
        case 0x2393f8u: goto label_2393f8;
        case 0x2393fcu: goto label_2393fc;
        case 0x239400u: goto label_239400;
        case 0x239404u: goto label_239404;
        case 0x239408u: goto label_239408;
        case 0x23940cu: goto label_23940c;
        case 0x239410u: goto label_239410;
        case 0x239414u: goto label_239414;
        case 0x239418u: goto label_239418;
        case 0x23941cu: goto label_23941c;
        case 0x239420u: goto label_239420;
        case 0x239424u: goto label_239424;
        case 0x239428u: goto label_239428;
        case 0x23942cu: goto label_23942c;
        case 0x239430u: goto label_239430;
        case 0x239434u: goto label_239434;
        case 0x239438u: goto label_239438;
        case 0x23943cu: goto label_23943c;
        case 0x239440u: goto label_239440;
        case 0x239444u: goto label_239444;
        case 0x239448u: goto label_239448;
        case 0x23944cu: goto label_23944c;
        case 0x239450u: goto label_239450;
        case 0x239454u: goto label_239454;
        case 0x239458u: goto label_239458;
        case 0x23945cu: goto label_23945c;
        case 0x239460u: goto label_239460;
        case 0x239464u: goto label_239464;
        case 0x239468u: goto label_239468;
        case 0x23946cu: goto label_23946c;
        case 0x239470u: goto label_239470;
        case 0x239474u: goto label_239474;
        case 0x239478u: goto label_239478;
        case 0x23947cu: goto label_23947c;
        case 0x239480u: goto label_239480;
        case 0x239484u: goto label_239484;
        case 0x239488u: goto label_239488;
        case 0x23948cu: goto label_23948c;
        case 0x239490u: goto label_239490;
        case 0x239494u: goto label_239494;
        case 0x239498u: goto label_239498;
        case 0x23949cu: goto label_23949c;
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394a8u: goto label_2394a8;
        case 0x2394acu: goto label_2394ac;
        case 0x2394b0u: goto label_2394b0;
        case 0x2394b4u: goto label_2394b4;
        case 0x2394b8u: goto label_2394b8;
        case 0x2394bcu: goto label_2394bc;
        case 0x2394c0u: goto label_2394c0;
        case 0x2394c4u: goto label_2394c4;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394d0u: goto label_2394d0;
        case 0x2394d4u: goto label_2394d4;
        case 0x2394d8u: goto label_2394d8;
        case 0x2394dcu: goto label_2394dc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394e4u: goto label_2394e4;
        case 0x2394e8u: goto label_2394e8;
        case 0x2394ecu: goto label_2394ec;
        case 0x2394f0u: goto label_2394f0;
        case 0x2394f4u: goto label_2394f4;
        case 0x2394f8u: goto label_2394f8;
        case 0x2394fcu: goto label_2394fc;
        case 0x239500u: goto label_239500;
        case 0x239504u: goto label_239504;
        case 0x239508u: goto label_239508;
        case 0x23950cu: goto label_23950c;
        case 0x239510u: goto label_239510;
        case 0x239514u: goto label_239514;
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        case 0x239558u: goto label_239558;
        case 0x23955cu: goto label_23955c;
        case 0x239560u: goto label_239560;
        case 0x239564u: goto label_239564;
        case 0x239568u: goto label_239568;
        case 0x23956cu: goto label_23956c;
        default: break;
    }

    ctx->pc = 0x239240u;

label_239240:
    // 0x239240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239244:
    // 0x239244: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x239244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_239248:
    // 0x239248: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x239248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_23924c:
    // 0x23924c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23924cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239250:
    // 0x239250: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x239250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_239254:
    // 0x239254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_239258:
    // 0x239258: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x239258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23925c:
    // 0x23925c: 0xc0b6dac  jal         func_2DB6B0
label_239260:
    if (ctx->pc == 0x239260u) {
        ctx->pc = 0x239260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23925Cu;
        // 0x239260: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x239264u;
        goto label_239264;
    }
    ctx->pc = 0x23925Cu;
    SET_GPR_U32(ctx, 31, 0x239264u);
    ctx->pc = 0x239260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23925Cu;
    // 0x239260: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23925Cu, 0x239264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239264u;
label_239264:
    // 0x239264: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x239264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239268:
    // 0x239268: 0x10720035  beq         $v1, $s2, . + 4 + (0x35 << 2)
label_23926c:
    if (ctx->pc == 0x23926Cu) {
        ctx->pc = 0x23926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239268u;
        // 0x23926c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239270u;
        goto label_239270;
    }
    ctx->pc = 0x239268u;
    {
        const bool branch_taken_0x239268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x23926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239268u;
        // 0x23926c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239268) {
            ctx->pc = 0x239340u;
            goto label_239340;
        }
    }
    ctx->pc = 0x239270u;
label_239270:
    // 0x239270: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x239270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_239274:
    // 0x239274: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_239278:
    if (ctx->pc == 0x239278u) {
        ctx->pc = 0x239278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239274u;
        // 0x239278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23927Cu;
        goto label_23927c;
    }
    ctx->pc = 0x239274u;
    {
        const bool branch_taken_0x239274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239274) {
            ctx->pc = 0x239278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239274u;
            // 0x239278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23928Cu;
            goto label_23928c;
        }
    }
    ctx->pc = 0x23927Cu;
label_23927c:
    // 0x23927c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_239280:
    if (ctx->pc == 0x239280u) {
        ctx->pc = 0x239280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23927Cu;
        // 0x239280: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239284u;
        goto label_239284;
    }
    ctx->pc = 0x23927Cu;
    {
        const bool branch_taken_0x23927c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23927c) {
            ctx->pc = 0x239280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23927Cu;
            // 0x239280: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392A4u;
            goto label_2392a4;
        }
    }
    ctx->pc = 0x239284u;
label_239284:
    // 0x239284: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_239288:
    if (ctx->pc == 0x239288u) {
        ctx->pc = 0x239288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239284u;
        // 0x239288: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23928Cu;
        goto label_23928c;
    }
    ctx->pc = 0x239284u;
    {
        const bool branch_taken_0x239284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239284u;
        // 0x239288: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239284) {
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x23928Cu;
label_23928c:
    // 0x23928c: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
label_239290:
    if (ctx->pc == 0x239290u) {
        ctx->pc = 0x239290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23928Cu;
        // 0x239290: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239294u;
        goto label_239294;
    }
    ctx->pc = 0x23928Cu;
    {
        const bool branch_taken_0x23928c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23928Cu;
        // 0x239290: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23928c) {
            ctx->pc = 0x239448u;
            goto label_239448;
        }
    }
    ctx->pc = 0x239294u;
label_239294:
    // 0x239294: 0x50620082  beql        $v1, $v0, . + 4 + (0x82 << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239294u;
        // 0x239298: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x239294) {
            ctx->pc = 0x239298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239294u;
            // 0x239298: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2394A0u;
            goto label_2394a0;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x100000ad  b           . + 4 + (0xAD << 2)
label_2392a0:
    if (ctx->pc == 0x2392A0u) {
        ctx->pc = 0x2392A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23929Cu;
        // 0x2392a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392A4u;
        goto label_2392a4;
    }
    ctx->pc = 0x23929Cu;
    {
        const bool branch_taken_0x23929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23929Cu;
        // 0x2392a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23929c) {
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x2392A4u;
label_2392a4:
    // 0x2392a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2392a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2392a8:
    // 0x2392a8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2392a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_2392ac:
    // 0x2392ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2392acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2392b0:
    // 0x2392b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2392b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2392b4:
    // 0x2392b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2392b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2392b8:
    // 0x2392b8: 0x8c453bd8  lw          $a1, 0x3BD8($v0)
    ctx->pc = 0x2392b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15320)));
label_2392bc:
    // 0x2392bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2392bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2392c0:
    // 0x2392c0: 0x8c463bdc  lw          $a2, 0x3BDC($v0)
    ctx->pc = 0x2392c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15324)));
label_2392c4:
    // 0x2392c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2392c8:
    // 0x2392c8: 0xc0aa15e  jal         func_2A8578
label_2392cc:
    if (ctx->pc == 0x2392CCu) {
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392D0u;
        goto label_2392d0;
    }
    ctx->pc = 0x2392C8u;
    SET_GPR_U32(ctx, 31, 0x2392D0u);
    ctx->pc = 0x2392CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392C8u;
    // 0x2392cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2392C8u, 0x2392D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2392d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2392d4:
    // 0x2392d4: 0xc07e804  jal         func_1FA010
label_2392d8:
    if (ctx->pc == 0x2392D8u) {
        ctx->pc = 0x2392D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392D4u;
        // 0x2392d8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392DCu;
        goto label_2392dc;
    }
    ctx->pc = 0x2392D4u;
    SET_GPR_U32(ctx, 31, 0x2392DCu);
    ctx->pc = 0x2392D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392D4u;
    // 0x2392d8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2392D4u, 0x2392DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392DCu;
label_2392dc:
    // 0x2392dc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2392dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2392e0:
    // 0x2392e0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2392e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2392e4:
    // 0x2392e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2392e8:
    if (ctx->pc == 0x2392E8u) {
        ctx->pc = 0x2392E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392E4u;
        // 0x2392e8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392ECu;
        goto label_2392ec;
    }
    ctx->pc = 0x2392E4u;
    {
        const bool branch_taken_0x2392e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392E4u;
        // 0x2392e8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392e4) {
            ctx->pc = 0x239304u;
            goto label_239304;
        }
    }
    ctx->pc = 0x2392ECu;
label_2392ec:
    // 0x2392ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2392ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2392f0:
    // 0x2392f0: 0x2442a400  addiu       $v0, $v0, -0x5C00
    ctx->pc = 0x2392f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
label_2392f4:
    // 0x2392f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2392f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2392f8:
    // 0x2392f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2392fc:
    // 0x2392fc: 0x800008  jr          $a0
label_239300:
    if (ctx->pc == 0x239300u) {
        ctx->pc = 0x239304u;
        goto label_239304;
    }
    ctx->pc = 0x2392FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239304u: goto label_239304;
            case 0x23930Cu: goto label_23930c;
            case 0x239314u: goto label_239314;
            case 0x23931Cu: goto label_23931c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x239304u;
label_239304:
    // 0x239304: 0x10000006  b           . + 4 + (0x6 << 2)
label_239308:
    if (ctx->pc == 0x239308u) {
        ctx->pc = 0x239308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239304u;
        // 0x239308: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23930Cu;
        goto label_23930c;
    }
    ctx->pc = 0x239304u;
    {
        const bool branch_taken_0x239304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239304u;
        // 0x239308: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239304) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x23930Cu;
label_23930c:
    // 0x23930c: 0x10000004  b           . + 4 + (0x4 << 2)
label_239310:
    if (ctx->pc == 0x239310u) {
        ctx->pc = 0x239310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23930Cu;
        // 0x239310: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239314u;
        goto label_239314;
    }
    ctx->pc = 0x23930Cu;
    {
        const bool branch_taken_0x23930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23930Cu;
        // 0x239310: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23930c) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x239314u;
label_239314:
    // 0x239314: 0x10000002  b           . + 4 + (0x2 << 2)
label_239318:
    if (ctx->pc == 0x239318u) {
        ctx->pc = 0x239318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239314u;
        // 0x239318: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23931Cu;
        goto label_23931c;
    }
    ctx->pc = 0x239314u;
    {
        const bool branch_taken_0x239314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239314u;
        // 0x239318: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239314) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x23931Cu;
label_23931c:
    // 0x23931c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_239320:
    // 0x239320: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x239320u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_239324:
    // 0x239324: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239328:
    // 0x239328: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23932c:
    // 0x23932c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_239330:
    // 0x239330: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x239330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
label_239334:
    // 0x239334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239338:
    // 0x239338: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x239338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_23933c:
    // 0x23933c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23933cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239340:
    // 0x239340: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x239340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_239344:
    // 0x239344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239348:
    // 0x239348: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x239348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_23934c:
    // 0x23934c: 0xc04d476  jal         func_1351D8
label_239350:
    if (ctx->pc == 0x239350u) {
        ctx->pc = 0x239350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23934Cu;
        // 0x239350: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239354u;
        goto label_239354;
    }
    ctx->pc = 0x23934Cu;
    SET_GPR_U32(ctx, 31, 0x239354u);
    ctx->pc = 0x239350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23934Cu;
    // 0x239350: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23934Cu, 0x239354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239354u;
label_239354:
    // 0x239354: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_239358:
    // 0x239358: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23935c:
    if (ctx->pc == 0x23935Cu) {
        ctx->pc = 0x23935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239358u;
        // 0x23935c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239360u;
        goto label_239360;
    }
    ctx->pc = 0x239358u;
    {
        const bool branch_taken_0x239358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239358u;
        // 0x23935c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239358) {
            ctx->pc = 0x239380u;
            goto label_239380;
        }
    }
    ctx->pc = 0x239360u;
label_239360:
    // 0x239360: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x239360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239364:
    // 0x239364: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x239364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_239368:
    // 0x239368: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x239368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_23936c:
    // 0x23936c: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x23936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_239370:
    // 0x239370: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x239370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_239374:
    // 0x239374: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x239374u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_239378:
    // 0x239378: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x239378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_23937c:
    // 0x23937c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x23937cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_239380:
    // 0x239380: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x239380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_239384:
    // 0x239384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239388:
    // 0x239388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23938c:
    // 0x23938c: 0xc055f06  jal         func_157C18
label_239390:
    if (ctx->pc == 0x239390u) {
        ctx->pc = 0x239390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23938Cu;
        // 0x239390: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x239394u;
        goto label_239394;
    }
    ctx->pc = 0x23938Cu;
    SET_GPR_U32(ctx, 31, 0x239394u);
    ctx->pc = 0x239390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23938Cu;
    // 0x239390: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23938Cu, 0x239394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239394u;
label_239394:
    // 0x239394: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_239398:
    if (ctx->pc == 0x239398u) {
        ctx->pc = 0x239398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239394u;
        // 0x239398: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23939Cu;
        goto label_23939c;
    }
    ctx->pc = 0x239394u;
    {
        const bool branch_taken_0x239394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239394u;
        // 0x239398: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239394) {
            ctx->pc = 0x2393ACu;
            goto label_2393ac;
        }
    }
    ctx->pc = 0x23939Cu;
label_23939c:
    // 0x23939c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23939cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_2393a0:
    // 0x2393a0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2393a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_2393a4:
    // 0x2393a4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2393a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_2393a8:
    // 0x2393a8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2393a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2393ac:
    // 0x2393ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2393acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2393b0:
    // 0x2393b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2393b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2393b4:
    // 0x2393b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2393b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2393b8:
    // 0x2393b8: 0xc053e7c  jal         func_14F9F0
label_2393bc:
    if (ctx->pc == 0x2393BCu) {
        ctx->pc = 0x2393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393B8u;
        // 0x2393bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393C0u;
        goto label_2393c0;
    }
    ctx->pc = 0x2393B8u;
    SET_GPR_U32(ctx, 31, 0x2393C0u);
    ctx->pc = 0x2393BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393B8u;
    // 0x2393bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2393B8u, 0x2393C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393C0u;
label_2393c0:
    // 0x2393c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2393c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2393c4:
    // 0x2393c4: 0xc053e4a  jal         func_14F928
label_2393c8:
    if (ctx->pc == 0x2393C8u) {
        ctx->pc = 0x2393C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393C4u;
        // 0x2393c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393CCu;
        goto label_2393cc;
    }
    ctx->pc = 0x2393C4u;
    SET_GPR_U32(ctx, 31, 0x2393CCu);
    ctx->pc = 0x2393C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393C4u;
    // 0x2393c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2393C4u, 0x2393CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393CCu;
label_2393cc:
    // 0x2393cc: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x2393ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_2393d0:
    // 0x2393d0: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_2393d4:
    if (ctx->pc == 0x2393D4u) {
        ctx->pc = 0x2393D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393D0u;
        // 0x2393d4: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393D8u;
        goto label_2393d8;
    }
    ctx->pc = 0x2393D0u;
    {
        const bool branch_taken_0x2393d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2393D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393D0u;
        // 0x2393d4: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393d0) {
            ctx->pc = 0x23942Cu;
            goto label_23942c;
        }
    }
    ctx->pc = 0x2393D8u;
label_2393d8:
    // 0x2393d8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2393dc:
    // 0x2393dc: 0xc0b6ddc  jal         func_2DB770
label_2393e0:
    if (ctx->pc == 0x2393E0u) {
        ctx->pc = 0x2393E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393DCu;
        // 0x2393e0: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393E4u;
        goto label_2393e4;
    }
    ctx->pc = 0x2393DCu;
    SET_GPR_U32(ctx, 31, 0x2393E4u);
    ctx->pc = 0x2393E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393DCu;
    // 0x2393e0: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x2393DCu, 0x2393E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393E4u;
label_2393e4:
    // 0x2393e4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2393e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2393e8:
    // 0x2393e8: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_2393ec:
    // 0x2393ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2393ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2393f0:
    // 0x2393f0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2393f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_2393f4:
    // 0x2393f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2393f8:
    if (ctx->pc == 0x2393F8u) {
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F4u;
        // 0x2393f8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393FCu;
        goto label_2393fc;
    }
    ctx->pc = 0x2393F4u;
    {
        const bool branch_taken_0x2393f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393f4) {
            ctx->pc = 0x2393F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2393F4u;
            // 0x2393f8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23940Cu;
            goto label_23940c;
        }
    }
    ctx->pc = 0x2393FCu;
label_2393fc:
    // 0x2393fc: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2393fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_239400:
    // 0x239400: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_239404:
    // 0x239404: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x239404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_239408:
    // 0x239408: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x239408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23940c:
    // 0x23940c: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
label_239410:
    // 0x239410: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239414:
    // 0x239414: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_239418:
    if (ctx->pc == 0x239418u) {
        ctx->pc = 0x239418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239414u;
        // 0x239418: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23941Cu;
        goto label_23941c;
    }
    ctx->pc = 0x239414u;
    {
        const bool branch_taken_0x239414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239414) {
            ctx->pc = 0x239418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239414u;
            // 0x239418: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x23941Cu;
label_23941c:
    // 0x23941c: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x23941cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_239420:
    // 0x239420: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x239420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_239424:
    // 0x239424: 0x1000004a  b           . + 4 + (0x4A << 2)
label_239428:
    if (ctx->pc == 0x239428u) {
        ctx->pc = 0x239428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239424u;
        // 0x239428: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23942Cu;
        goto label_23942c;
    }
    ctx->pc = 0x239424u;
    {
        const bool branch_taken_0x239424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239424u;
        // 0x239428: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239424) {
            ctx->pc = 0x239550u;
            goto label_239550;
        }
    }
    ctx->pc = 0x23942Cu;
label_23942c:
    // 0x23942c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x23942cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_239430:
    // 0x239430: 0x5c400048  bgtzl       $v0, . + 4 + (0x48 << 2)
label_239434:
    if (ctx->pc == 0x239434u) {
        ctx->pc = 0x239434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239430u;
        // 0x239434: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239438u;
        goto label_239438;
    }
    ctx->pc = 0x239430u;
    {
        const bool branch_taken_0x239430 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x239430) {
            ctx->pc = 0x239434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239430u;
            // 0x239434: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x239438u;
label_239438:
    // 0x239438: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23943c:
    // 0x23943c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23943cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239440:
    // 0x239440: 0x10000043  b           . + 4 + (0x43 << 2)
label_239444:
    if (ctx->pc == 0x239444u) {
        ctx->pc = 0x239444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239440u;
        // 0x239444: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239448u;
        goto label_239448;
    }
    ctx->pc = 0x239440u;
    {
        const bool branch_taken_0x239440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239440u;
        // 0x239444: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239440) {
            ctx->pc = 0x239550u;
            goto label_239550;
        }
    }
    ctx->pc = 0x239448u;
label_239448:
    // 0x239448: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x239448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_23944c:
    // 0x23944c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239450:
    // 0x239450: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_239454:
    // 0x239454: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x239454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239458:
    // 0x239458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23945c:
    // 0x23945c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23945cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239460:
    // 0x239460: 0x8c453be0  lw          $a1, 0x3BE0($v0)
    ctx->pc = 0x239460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15328)));
label_239464:
    // 0x239464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239468:
    // 0x239468: 0x8c463be4  lw          $a2, 0x3BE4($v0)
    ctx->pc = 0x239468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15332)));
label_23946c:
    // 0x23946c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_239470:
    // 0x239470: 0xc0aa15e  jal         func_2A8578
label_239474:
    if (ctx->pc == 0x239474u) {
        ctx->pc = 0x239474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239470u;
        // 0x239474: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239478u;
        goto label_239478;
    }
    ctx->pc = 0x239470u;
    SET_GPR_U32(ctx, 31, 0x239478u);
    ctx->pc = 0x239474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239470u;
    // 0x239474: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239470u, 0x239478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239478u;
label_239478:
    // 0x239478: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_23947c:
    // 0x23947c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x23947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_239480:
    // 0x239480: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_239484:
    // 0x239484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_239488:
    // 0x239488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23948c:
    // 0x23948c: 0xae1205f0  sw          $s2, 0x5F0($s0)
    ctx->pc = 0x23948cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 18));
label_239490:
    // 0x239490: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x239490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_239494:
    // 0x239494: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x239494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
label_239498:
    // 0x239498: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23949c:
    // 0x23949c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x23949cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2394a0:
    // 0x2394a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2394a4:
    if (ctx->pc == 0x2394A4u) {
        ctx->pc = 0x2394A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394A0u;
        // 0x2394a4: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394A8u;
        goto label_2394a8;
    }
    ctx->pc = 0x2394A0u;
    {
        const bool branch_taken_0x2394a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394A0u;
        // 0x2394a4: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394a0) {
            ctx->pc = 0x2394C4u;
            goto label_2394c4;
        }
    }
    ctx->pc = 0x2394A8u;
label_2394a8:
    // 0x2394a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2394ac:
    // 0x2394ac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2394b0:
    // 0x2394b0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2394b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2394b4:
    // 0x2394b4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2394b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_2394b8:
    // 0x2394b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2394b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2394bc:
    // 0x2394bc: 0xc04d476  jal         func_1351D8
label_2394c0:
    if (ctx->pc == 0x2394C0u) {
        ctx->pc = 0x2394C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394BCu;
        // 0x2394c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394C4u;
        goto label_2394c4;
    }
    ctx->pc = 0x2394BCu;
    SET_GPR_U32(ctx, 31, 0x2394C4u);
    ctx->pc = 0x2394C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394BCu;
    // 0x2394c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2394BCu, 0x2394C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394C4u;
label_2394c4:
    // 0x2394c4: 0xc055f06  jal         func_157C18
label_2394c8:
    if (ctx->pc == 0x2394C8u) {
        ctx->pc = 0x2394C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394C4u;
        // 0x2394c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394CCu;
        goto label_2394cc;
    }
    ctx->pc = 0x2394C4u;
    SET_GPR_U32(ctx, 31, 0x2394CCu);
    ctx->pc = 0x2394C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394C4u;
    // 0x2394c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2394C4u, 0x2394CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394CCu;
label_2394cc:
    // 0x2394cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2394d0:
    if (ctx->pc == 0x2394D0u) {
        ctx->pc = 0x2394D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394CCu;
        // 0x2394d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394D4u;
        goto label_2394d4;
    }
    ctx->pc = 0x2394CCu;
    {
        const bool branch_taken_0x2394cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394CCu;
        // 0x2394d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394cc) {
            ctx->pc = 0x2394E4u;
            goto label_2394e4;
        }
    }
    ctx->pc = 0x2394D4u;
label_2394d4:
    // 0x2394d4: 0xc09c176  jal         func_2705D8
label_2394d8:
    if (ctx->pc == 0x2394D8u) {
        ctx->pc = 0x2394D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394D4u;
        // 0x2394d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394DCu;
        goto label_2394dc;
    }
    ctx->pc = 0x2394D4u;
    SET_GPR_U32(ctx, 31, 0x2394DCu);
    ctx->pc = 0x2394D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394D4u;
    // 0x2394d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2394D4u, 0x2394DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394DCu;
label_2394dc:
    // 0x2394dc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2394e0:
    if (ctx->pc == 0x2394E0u) {
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394DCu;
        // 0x2394e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394E4u;
        goto label_2394e4;
    }
    ctx->pc = 0x2394DCu;
    {
        const bool branch_taken_0x2394dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394DCu;
        // 0x2394e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394dc) {
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x2394E4u;
label_2394e4:
    // 0x2394e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2394e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2394e8:
    // 0x2394e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2394e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2394ec:
    // 0x2394ec: 0xc053e7c  jal         func_14F9F0
label_2394f0:
    if (ctx->pc == 0x2394F0u) {
        ctx->pc = 0x2394F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394ECu;
        // 0x2394f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394F4u;
        goto label_2394f4;
    }
    ctx->pc = 0x2394ECu;
    SET_GPR_U32(ctx, 31, 0x2394F4u);
    ctx->pc = 0x2394F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394ECu;
    // 0x2394f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2394ECu, 0x2394F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394F4u;
label_2394f4:
    // 0x2394f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2394f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2394f8:
    // 0x2394f8: 0xc053e4a  jal         func_14F928
label_2394fc:
    if (ctx->pc == 0x2394FCu) {
        ctx->pc = 0x2394FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394F8u;
        // 0x2394fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239500u;
        goto label_239500;
    }
    ctx->pc = 0x2394F8u;
    SET_GPR_U32(ctx, 31, 0x239500u);
    ctx->pc = 0x2394FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394F8u;
    // 0x2394fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2394F8u, 0x239500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239500u;
label_239500:
    // 0x239500: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x239500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_239504:
    // 0x239504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_239508:
    // 0x239508: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_23950c:
    if (ctx->pc == 0x23950Cu) {
        ctx->pc = 0x23950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239508u;
        // 0x23950c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239510u;
        goto label_239510;
    }
    ctx->pc = 0x239508u;
    {
        const bool branch_taken_0x239508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239508) {
            ctx->pc = 0x23950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239508u;
            // 0x23950c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x239510u;
label_239510:
    // 0x239510: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x239510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_239514:
    // 0x239514: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_239518:
    if (ctx->pc == 0x239518u) {
        ctx->pc = 0x239518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239514u;
        // 0x239518: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23951Cu;
        goto label_23951c;
    }
    ctx->pc = 0x239514u;
    {
        const bool branch_taken_0x239514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239514u;
        // 0x239518: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239514) {
            ctx->pc = 0x239550u;
            goto label_239550;
        }
    }
    ctx->pc = 0x23951Cu;
label_23951c:
    // 0x23951c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x23951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_239520:
    // 0x239520: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_239524:
    // 0x239524: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239528:
    // 0x239528: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x239528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_23952c:
    // 0x23952c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23952cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239530:
    // 0x239530: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x239530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_239534:
    // 0x239534: 0x40f809  jalr        $v0
label_239538:
    if (ctx->pc == 0x239538u) {
        ctx->pc = 0x239538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239534u;
        // 0x239538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23953Cu;
        goto label_23953c;
    }
    ctx->pc = 0x239534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23953Cu);
        ctx->pc = 0x239538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239534u;
        // 0x239538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239534u, 0x23953Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23953Cu;
label_23953c:
    // 0x23953c: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x23953cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_239540:
    // 0x239540: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_239544:
    if (ctx->pc == 0x239544u) {
        ctx->pc = 0x239544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239540u;
        // 0x239544: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239548u;
        goto label_239548;
    }
    ctx->pc = 0x239540u;
    {
        const bool branch_taken_0x239540 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x239540) {
            ctx->pc = 0x239544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239540u;
            // 0x239544: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x239548u;
label_239548:
    // 0x239548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23954c:
    // 0x23954c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x23954cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_239550:
    // 0x239550: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x239550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239554:
    // 0x239554: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x239554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239558:
    // 0x239558: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x239558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23955c:
    // 0x23955c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239560:
    // 0x239560: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x239560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_239564:
    // 0x239564: 0x3e00008  jr          $ra
label_239568:
    if (ctx->pc == 0x239568u) {
        ctx->pc = 0x239568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239564u;
        // 0x239568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23956Cu;
        goto label_23956c;
    }
    ctx->pc = 0x239564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239564u;
        // 0x239568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23956Cu;
label_23956c:
    // 0x23956c: 0x0  nop
    ctx->pc = 0x23956cu;
    // NOP
    ctx->pc = 0x239570u;
}
