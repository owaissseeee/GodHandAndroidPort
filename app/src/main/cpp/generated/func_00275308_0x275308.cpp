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

// Function: func_00275308
// Address: 0x275308 - 0x2755e0
void func_00275308_0x275308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00275308_0x275308");
#endif

    switch (ctx->pc) {
        case 0x275308u: goto label_275308;
        case 0x27530cu: goto label_27530c;
        case 0x275310u: goto label_275310;
        case 0x275314u: goto label_275314;
        case 0x275318u: goto label_275318;
        case 0x27531cu: goto label_27531c;
        case 0x275320u: goto label_275320;
        case 0x275324u: goto label_275324;
        case 0x275328u: goto label_275328;
        case 0x27532cu: goto label_27532c;
        case 0x275330u: goto label_275330;
        case 0x275334u: goto label_275334;
        case 0x275338u: goto label_275338;
        case 0x27533cu: goto label_27533c;
        case 0x275340u: goto label_275340;
        case 0x275344u: goto label_275344;
        case 0x275348u: goto label_275348;
        case 0x27534cu: goto label_27534c;
        case 0x275350u: goto label_275350;
        case 0x275354u: goto label_275354;
        case 0x275358u: goto label_275358;
        case 0x27535cu: goto label_27535c;
        case 0x275360u: goto label_275360;
        case 0x275364u: goto label_275364;
        case 0x275368u: goto label_275368;
        case 0x27536cu: goto label_27536c;
        case 0x275370u: goto label_275370;
        case 0x275374u: goto label_275374;
        case 0x275378u: goto label_275378;
        case 0x27537cu: goto label_27537c;
        case 0x275380u: goto label_275380;
        case 0x275384u: goto label_275384;
        case 0x275388u: goto label_275388;
        case 0x27538cu: goto label_27538c;
        case 0x275390u: goto label_275390;
        case 0x275394u: goto label_275394;
        case 0x275398u: goto label_275398;
        case 0x27539cu: goto label_27539c;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753a4u: goto label_2753a4;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753acu: goto label_2753ac;
        case 0x2753b0u: goto label_2753b0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753b8u: goto label_2753b8;
        case 0x2753bcu: goto label_2753bc;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753c4u: goto label_2753c4;
        case 0x2753c8u: goto label_2753c8;
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753d4u: goto label_2753d4;
        case 0x2753d8u: goto label_2753d8;
        case 0x2753dcu: goto label_2753dc;
        case 0x2753e0u: goto label_2753e0;
        case 0x2753e4u: goto label_2753e4;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753ecu: goto label_2753ec;
        case 0x2753f0u: goto label_2753f0;
        case 0x2753f4u: goto label_2753f4;
        case 0x2753f8u: goto label_2753f8;
        case 0x2753fcu: goto label_2753fc;
        case 0x275400u: goto label_275400;
        case 0x275404u: goto label_275404;
        case 0x275408u: goto label_275408;
        case 0x27540cu: goto label_27540c;
        case 0x275410u: goto label_275410;
        case 0x275414u: goto label_275414;
        case 0x275418u: goto label_275418;
        case 0x27541cu: goto label_27541c;
        case 0x275420u: goto label_275420;
        case 0x275424u: goto label_275424;
        case 0x275428u: goto label_275428;
        case 0x27542cu: goto label_27542c;
        case 0x275430u: goto label_275430;
        case 0x275434u: goto label_275434;
        case 0x275438u: goto label_275438;
        case 0x27543cu: goto label_27543c;
        case 0x275440u: goto label_275440;
        case 0x275444u: goto label_275444;
        case 0x275448u: goto label_275448;
        case 0x27544cu: goto label_27544c;
        case 0x275450u: goto label_275450;
        case 0x275454u: goto label_275454;
        case 0x275458u: goto label_275458;
        case 0x27545cu: goto label_27545c;
        case 0x275460u: goto label_275460;
        case 0x275464u: goto label_275464;
        case 0x275468u: goto label_275468;
        case 0x27546cu: goto label_27546c;
        case 0x275470u: goto label_275470;
        case 0x275474u: goto label_275474;
        case 0x275478u: goto label_275478;
        case 0x27547cu: goto label_27547c;
        case 0x275480u: goto label_275480;
        case 0x275484u: goto label_275484;
        case 0x275488u: goto label_275488;
        case 0x27548cu: goto label_27548c;
        case 0x275490u: goto label_275490;
        case 0x275494u: goto label_275494;
        case 0x275498u: goto label_275498;
        case 0x27549cu: goto label_27549c;
        case 0x2754a0u: goto label_2754a0;
        case 0x2754a4u: goto label_2754a4;
        case 0x2754a8u: goto label_2754a8;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b0u: goto label_2754b0;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754c0u: goto label_2754c0;
        case 0x2754c4u: goto label_2754c4;
        case 0x2754c8u: goto label_2754c8;
        case 0x2754ccu: goto label_2754cc;
        case 0x2754d0u: goto label_2754d0;
        case 0x2754d4u: goto label_2754d4;
        case 0x2754d8u: goto label_2754d8;
        case 0x2754dcu: goto label_2754dc;
        case 0x2754e0u: goto label_2754e0;
        case 0x2754e4u: goto label_2754e4;
        case 0x2754e8u: goto label_2754e8;
        case 0x2754ecu: goto label_2754ec;
        case 0x2754f0u: goto label_2754f0;
        case 0x2754f4u: goto label_2754f4;
        case 0x2754f8u: goto label_2754f8;
        case 0x2754fcu: goto label_2754fc;
        case 0x275500u: goto label_275500;
        case 0x275504u: goto label_275504;
        case 0x275508u: goto label_275508;
        case 0x27550cu: goto label_27550c;
        case 0x275510u: goto label_275510;
        case 0x275514u: goto label_275514;
        case 0x275518u: goto label_275518;
        case 0x27551cu: goto label_27551c;
        case 0x275520u: goto label_275520;
        case 0x275524u: goto label_275524;
        case 0x275528u: goto label_275528;
        case 0x27552cu: goto label_27552c;
        case 0x275530u: goto label_275530;
        case 0x275534u: goto label_275534;
        case 0x275538u: goto label_275538;
        case 0x27553cu: goto label_27553c;
        case 0x275540u: goto label_275540;
        case 0x275544u: goto label_275544;
        case 0x275548u: goto label_275548;
        case 0x27554cu: goto label_27554c;
        case 0x275550u: goto label_275550;
        case 0x275554u: goto label_275554;
        case 0x275558u: goto label_275558;
        case 0x27555cu: goto label_27555c;
        case 0x275560u: goto label_275560;
        case 0x275564u: goto label_275564;
        case 0x275568u: goto label_275568;
        case 0x27556cu: goto label_27556c;
        case 0x275570u: goto label_275570;
        case 0x275574u: goto label_275574;
        case 0x275578u: goto label_275578;
        case 0x27557cu: goto label_27557c;
        case 0x275580u: goto label_275580;
        case 0x275584u: goto label_275584;
        case 0x275588u: goto label_275588;
        case 0x27558cu: goto label_27558c;
        case 0x275590u: goto label_275590;
        case 0x275594u: goto label_275594;
        case 0x275598u: goto label_275598;
        case 0x27559cu: goto label_27559c;
        case 0x2755a0u: goto label_2755a0;
        case 0x2755a4u: goto label_2755a4;
        case 0x2755a8u: goto label_2755a8;
        case 0x2755acu: goto label_2755ac;
        case 0x2755b0u: goto label_2755b0;
        case 0x2755b4u: goto label_2755b4;
        case 0x2755b8u: goto label_2755b8;
        case 0x2755bcu: goto label_2755bc;
        case 0x2755c0u: goto label_2755c0;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755c8u: goto label_2755c8;
        case 0x2755ccu: goto label_2755cc;
        case 0x2755d0u: goto label_2755d0;
        case 0x2755d4u: goto label_2755d4;
        case 0x2755d8u: goto label_2755d8;
        case 0x2755dcu: goto label_2755dc;
        default: break;
    }

    ctx->pc = 0x275308u;

label_275308:
    // 0x275308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27530c:
    // 0x27530c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275310:
    // 0x275310: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x275310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_275314:
    // 0x275314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_275318:
    // 0x275318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27531c:
    // 0x27531c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27531cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_275320:
    // 0x275320: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_275324:
    if (ctx->pc == 0x275324u) {
        ctx->pc = 0x275324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275320u;
        // 0x275324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275328u;
        goto label_275328;
    }
    ctx->pc = 0x275320u;
    {
        const bool branch_taken_0x275320 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x275324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275320u;
        // 0x275324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275320) {
            ctx->pc = 0x275338u;
            goto label_275338;
        }
    }
    ctx->pc = 0x275328u;
label_275328:
    // 0x275328: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x275328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_27532c:
    // 0x27532c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27532cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_275330:
    // 0x275330: 0x10000006  b           . + 4 + (0x6 << 2)
label_275334:
    if (ctx->pc == 0x275334u) {
        ctx->pc = 0x275334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275330u;
        // 0x275334: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275338u;
        goto label_275338;
    }
    ctx->pc = 0x275330u;
    {
        const bool branch_taken_0x275330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275330u;
        // 0x275334: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275330) {
            ctx->pc = 0x27534Cu;
            goto label_27534c;
        }
    }
    ctx->pc = 0x275338u;
label_275338:
    // 0x275338: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x275338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_27533c:
    // 0x27533c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_275340:
    // 0x275340: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x275340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_275344:
    // 0x275344: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x275344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_275348:
    // 0x275348: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x275348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27534c:
    // 0x27534c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275350:
    // 0x275350: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_275354:
    if (ctx->pc == 0x275354u) {
        ctx->pc = 0x275354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275350u;
        // 0x275354: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275358u;
        goto label_275358;
    }
    ctx->pc = 0x275350u;
    {
        const bool branch_taken_0x275350 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x275354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275350u;
        // 0x275354: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275350) {
            ctx->pc = 0x275360u;
            goto label_275360;
        }
    }
    ctx->pc = 0x275358u;
label_275358:
    // 0x275358: 0x10000003  b           . + 4 + (0x3 << 2)
label_27535c:
    if (ctx->pc == 0x27535Cu) {
        ctx->pc = 0x27535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275358u;
        // 0x27535c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275360u;
        goto label_275360;
    }
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275358u;
        // 0x27535c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275358) {
            ctx->pc = 0x275368u;
            goto label_275368;
        }
    }
    ctx->pc = 0x275360u;
label_275360:
    // 0x275360: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_275364:
    // 0x275364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x275364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_275368:
    // 0x275368: 0xae0205a0  sw          $v0, 0x5A0($s0)
    ctx->pc = 0x275368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
label_27536c:
    // 0x27536c: 0x8e0606ec  lw          $a2, 0x6EC($s0)
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
label_275370:
    // 0x275370: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275374:
    if (ctx->pc == 0x275374u) {
        ctx->pc = 0x275374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275370u;
        // 0x275374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275378u;
        goto label_275378;
    }
    ctx->pc = 0x275370u;
    {
        const bool branch_taken_0x275370 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275370u;
        // 0x275374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275370) {
            ctx->pc = 0x27538Cu;
            goto label_27538c;
        }
    }
    ctx->pc = 0x275378u;
label_275378:
    // 0x275378: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27537c:
    // 0x27537c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27537cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275380:
    // 0x275380: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275384:
    // 0x275384: 0x60f809  jalr        $v1
label_275388:
    if (ctx->pc == 0x275388u) {
        ctx->pc = 0x275388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275384u;
        // 0x275388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27538Cu;
        goto label_27538c;
    }
    ctx->pc = 0x275384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27538Cu);
        ctx->pc = 0x275388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275384u;
        // 0x275388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275384u, 0x27538Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27538Cu;
label_27538c:
    // 0x27538c: 0x8e0606f0  lw          $a2, 0x6F0($s0)
    ctx->pc = 0x27538cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
label_275390:
    // 0x275390: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275394:
    if (ctx->pc == 0x275394u) {
        ctx->pc = 0x275394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275390u;
        // 0x275394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275398u;
        goto label_275398;
    }
    ctx->pc = 0x275390u;
    {
        const bool branch_taken_0x275390 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275390u;
        // 0x275394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275390) {
            ctx->pc = 0x2753ACu;
            goto label_2753ac;
        }
    }
    ctx->pc = 0x275398u;
label_275398:
    // 0x275398: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27539c:
    // 0x27539c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27539cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2753a0:
    // 0x2753a0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2753a4:
    // 0x2753a4: 0x60f809  jalr        $v1
label_2753a8:
    if (ctx->pc == 0x2753A8u) {
        ctx->pc = 0x2753A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753A4u;
        // 0x2753a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753ACu;
        goto label_2753ac;
    }
    ctx->pc = 0x2753A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2753ACu);
        ctx->pc = 0x2753A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753A4u;
        // 0x2753a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2753A4u, 0x2753ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2753ACu;
label_2753ac:
    // 0x2753ac: 0x8e0606f8  lw          $a2, 0x6F8($s0)
    ctx->pc = 0x2753acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1784)));
label_2753b0:
    // 0x2753b0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2753b4:
    if (ctx->pc == 0x2753B4u) {
        ctx->pc = 0x2753B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753B0u;
        // 0x2753b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753B8u;
        goto label_2753b8;
    }
    ctx->pc = 0x2753B0u;
    {
        const bool branch_taken_0x2753b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753B0u;
        // 0x2753b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753b0) {
            ctx->pc = 0x2753CCu;
            goto label_2753cc;
        }
    }
    ctx->pc = 0x2753B8u;
label_2753b8:
    // 0x2753b8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2753b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2753bc:
    // 0x2753bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2753bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2753c0:
    // 0x2753c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2753c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2753c4:
    // 0x2753c4: 0x60f809  jalr        $v1
label_2753c8:
    if (ctx->pc == 0x2753C8u) {
        ctx->pc = 0x2753C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753C4u;
        // 0x2753c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753CCu;
        goto label_2753cc;
    }
    ctx->pc = 0x2753C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2753CCu);
        ctx->pc = 0x2753C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753C4u;
        // 0x2753c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2753C4u, 0x2753CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2753CCu;
label_2753cc:
    // 0x2753cc: 0x8e0606fc  lw          $a2, 0x6FC($s0)
    ctx->pc = 0x2753ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
label_2753d0:
    // 0x2753d0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2753d4:
    if (ctx->pc == 0x2753D4u) {
        ctx->pc = 0x2753D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D0u;
        // 0x2753d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753D8u;
        goto label_2753d8;
    }
    ctx->pc = 0x2753D0u;
    {
        const bool branch_taken_0x2753d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D0u;
        // 0x2753d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753d0) {
            ctx->pc = 0x2753ECu;
            goto label_2753ec;
        }
    }
    ctx->pc = 0x2753D8u;
label_2753d8:
    // 0x2753d8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2753d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2753dc:
    // 0x2753dc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2753dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2753e0:
    // 0x2753e0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2753e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2753e4:
    // 0x2753e4: 0x60f809  jalr        $v1
label_2753e8:
    if (ctx->pc == 0x2753E8u) {
        ctx->pc = 0x2753E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753E4u;
        // 0x2753e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753ECu;
        goto label_2753ec;
    }
    ctx->pc = 0x2753E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2753ECu);
        ctx->pc = 0x2753E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753E4u;
        // 0x2753e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2753E4u, 0x2753ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2753ECu;
label_2753ec:
    // 0x2753ec: 0x8e060700  lw          $a2, 0x700($s0)
    ctx->pc = 0x2753ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
label_2753f0:
    // 0x2753f0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2753f4:
    if (ctx->pc == 0x2753F4u) {
        ctx->pc = 0x2753F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753F0u;
        // 0x2753f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753F8u;
        goto label_2753f8;
    }
    ctx->pc = 0x2753F0u;
    {
        const bool branch_taken_0x2753f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753F0u;
        // 0x2753f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753f0) {
            ctx->pc = 0x27540Cu;
            goto label_27540c;
        }
    }
    ctx->pc = 0x2753F8u;
label_2753f8:
    // 0x2753f8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2753f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2753fc:
    // 0x2753fc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2753fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275400:
    // 0x275400: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275404:
    // 0x275404: 0x60f809  jalr        $v1
label_275408:
    if (ctx->pc == 0x275408u) {
        ctx->pc = 0x275408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275404u;
        // 0x275408: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27540Cu;
        goto label_27540c;
    }
    ctx->pc = 0x275404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27540Cu);
        ctx->pc = 0x275408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275404u;
        // 0x275408: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275404u, 0x27540Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27540Cu;
label_27540c:
    // 0x27540c: 0x8e060704  lw          $a2, 0x704($s0)
    ctx->pc = 0x27540cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_275410:
    // 0x275410: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275414:
    if (ctx->pc == 0x275414u) {
        ctx->pc = 0x275414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275410u;
        // 0x275414: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275418u;
        goto label_275418;
    }
    ctx->pc = 0x275410u;
    {
        const bool branch_taken_0x275410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275410u;
        // 0x275414: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275410) {
            ctx->pc = 0x27542Cu;
            goto label_27542c;
        }
    }
    ctx->pc = 0x275418u;
label_275418:
    // 0x275418: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27541c:
    // 0x27541c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27541cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275420:
    // 0x275420: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275424:
    // 0x275424: 0x60f809  jalr        $v1
label_275428:
    if (ctx->pc == 0x275428u) {
        ctx->pc = 0x275428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275424u;
        // 0x275428: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27542Cu;
        goto label_27542c;
    }
    ctx->pc = 0x275424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27542Cu);
        ctx->pc = 0x275428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275424u;
        // 0x275428: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275424u, 0x27542Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27542Cu;
label_27542c:
    // 0x27542c: 0x8e060708  lw          $a2, 0x708($s0)
    ctx->pc = 0x27542cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_275430:
    // 0x275430: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275434:
    if (ctx->pc == 0x275434u) {
        ctx->pc = 0x275434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275430u;
        // 0x275434: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275438u;
        goto label_275438;
    }
    ctx->pc = 0x275430u;
    {
        const bool branch_taken_0x275430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275430u;
        // 0x275434: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275430) {
            ctx->pc = 0x27544Cu;
            goto label_27544c;
        }
    }
    ctx->pc = 0x275438u;
label_275438:
    // 0x275438: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27543c:
    // 0x27543c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27543cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275440:
    // 0x275440: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275444:
    // 0x275444: 0x60f809  jalr        $v1
label_275448:
    if (ctx->pc == 0x275448u) {
        ctx->pc = 0x275448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275444u;
        // 0x275448: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27544Cu;
        goto label_27544c;
    }
    ctx->pc = 0x275444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27544Cu);
        ctx->pc = 0x275448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275444u;
        // 0x275448: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275444u, 0x27544Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27544Cu;
label_27544c:
    // 0x27544c: 0x8e060734  lw          $a2, 0x734($s0)
    ctx->pc = 0x27544cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
label_275450:
    // 0x275450: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275454:
    if (ctx->pc == 0x275454u) {
        ctx->pc = 0x275454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275450u;
        // 0x275454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275458u;
        goto label_275458;
    }
    ctx->pc = 0x275450u;
    {
        const bool branch_taken_0x275450 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275450u;
        // 0x275454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275450) {
            ctx->pc = 0x27546Cu;
            goto label_27546c;
        }
    }
    ctx->pc = 0x275458u;
label_275458:
    // 0x275458: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27545c:
    // 0x27545c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275460:
    // 0x275460: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275464:
    // 0x275464: 0x60f809  jalr        $v1
label_275468:
    if (ctx->pc == 0x275468u) {
        ctx->pc = 0x275468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275464u;
        // 0x275468: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27546Cu;
        goto label_27546c;
    }
    ctx->pc = 0x275464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27546Cu);
        ctx->pc = 0x275468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275464u;
        // 0x275468: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275464u, 0x27546Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27546Cu;
label_27546c:
    // 0x27546c: 0x8e0606f4  lw          $a2, 0x6F4($s0)
    ctx->pc = 0x27546cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_275470:
    // 0x275470: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275474:
    if (ctx->pc == 0x275474u) {
        ctx->pc = 0x275474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275470u;
        // 0x275474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275478u;
        goto label_275478;
    }
    ctx->pc = 0x275470u;
    {
        const bool branch_taken_0x275470 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275470u;
        // 0x275474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275470) {
            ctx->pc = 0x27548Cu;
            goto label_27548c;
        }
    }
    ctx->pc = 0x275478u;
label_275478:
    // 0x275478: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27547c:
    // 0x27547c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27547cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275480:
    // 0x275480: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275484:
    // 0x275484: 0x60f809  jalr        $v1
label_275488:
    if (ctx->pc == 0x275488u) {
        ctx->pc = 0x275488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275484u;
        // 0x275488: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27548Cu;
        goto label_27548c;
    }
    ctx->pc = 0x275484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27548Cu);
        ctx->pc = 0x275488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275484u;
        // 0x275488: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275484u, 0x27548Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27548Cu;
label_27548c:
    // 0x27548c: 0x8e06070c  lw          $a2, 0x70C($s0)
    ctx->pc = 0x27548cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_275490:
    // 0x275490: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275494:
    if (ctx->pc == 0x275494u) {
        ctx->pc = 0x275494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275490u;
        // 0x275494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275498u;
        goto label_275498;
    }
    ctx->pc = 0x275490u;
    {
        const bool branch_taken_0x275490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275490u;
        // 0x275494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275490) {
            ctx->pc = 0x2754ACu;
            goto label_2754ac;
        }
    }
    ctx->pc = 0x275498u;
label_275498:
    // 0x275498: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27549c:
    // 0x27549c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2754a0:
    // 0x2754a0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2754a4:
    // 0x2754a4: 0x60f809  jalr        $v1
label_2754a8:
    if (ctx->pc == 0x2754A8u) {
        ctx->pc = 0x2754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754A4u;
        // 0x2754a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754ACu;
        goto label_2754ac;
    }
    ctx->pc = 0x2754A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2754ACu);
        ctx->pc = 0x2754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754A4u;
        // 0x2754a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2754A4u, 0x2754ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2754ACu;
label_2754ac:
    // 0x2754ac: 0x8e061964  lw          $a2, 0x1964($s0)
    ctx->pc = 0x2754acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6500)));
label_2754b0:
    // 0x2754b0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2754b4:
    if (ctx->pc == 0x2754B4u) {
        ctx->pc = 0x2754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754B0u;
        // 0x2754b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754B8u;
        goto label_2754b8;
    }
    ctx->pc = 0x2754B0u;
    {
        const bool branch_taken_0x2754b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754B0u;
        // 0x2754b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754b0) {
            ctx->pc = 0x2754CCu;
            goto label_2754cc;
        }
    }
    ctx->pc = 0x2754B8u;
label_2754b8:
    // 0x2754b8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2754bc:
    // 0x2754bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2754bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2754c0:
    // 0x2754c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2754c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2754c4:
    // 0x2754c4: 0x60f809  jalr        $v1
label_2754c8:
    if (ctx->pc == 0x2754C8u) {
        ctx->pc = 0x2754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754C4u;
        // 0x2754c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754CCu;
        goto label_2754cc;
    }
    ctx->pc = 0x2754C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2754CCu);
        ctx->pc = 0x2754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754C4u;
        // 0x2754c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2754C4u, 0x2754CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2754CCu;
label_2754cc:
    // 0x2754cc: 0x8e06196c  lw          $a2, 0x196C($s0)
    ctx->pc = 0x2754ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6508)));
label_2754d0:
    // 0x2754d0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2754d4:
    if (ctx->pc == 0x2754D4u) {
        ctx->pc = 0x2754D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754D0u;
        // 0x2754d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754D8u;
        goto label_2754d8;
    }
    ctx->pc = 0x2754D0u;
    {
        const bool branch_taken_0x2754d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754D0u;
        // 0x2754d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754d0) {
            ctx->pc = 0x2754ECu;
            goto label_2754ec;
        }
    }
    ctx->pc = 0x2754D8u;
label_2754d8:
    // 0x2754d8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2754dc:
    // 0x2754dc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2754dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2754e0:
    // 0x2754e0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2754e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2754e4:
    // 0x2754e4: 0x60f809  jalr        $v1
label_2754e8:
    if (ctx->pc == 0x2754E8u) {
        ctx->pc = 0x2754E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754E4u;
        // 0x2754e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754ECu;
        goto label_2754ec;
    }
    ctx->pc = 0x2754E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2754ECu);
        ctx->pc = 0x2754E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754E4u;
        // 0x2754e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2754E4u, 0x2754ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2754ECu;
label_2754ec:
    // 0x2754ec: 0x8e061970  lw          $a2, 0x1970($s0)
    ctx->pc = 0x2754ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6512)));
label_2754f0:
    // 0x2754f0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2754f4:
    if (ctx->pc == 0x2754F4u) {
        ctx->pc = 0x2754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754F0u;
        // 0x2754f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754F8u;
        goto label_2754f8;
    }
    ctx->pc = 0x2754F0u;
    {
        const bool branch_taken_0x2754f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754F0u;
        // 0x2754f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754f0) {
            ctx->pc = 0x27550Cu;
            goto label_27550c;
        }
    }
    ctx->pc = 0x2754F8u;
label_2754f8:
    // 0x2754f8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2754f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2754fc:
    // 0x2754fc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2754fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275500:
    // 0x275500: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275504:
    // 0x275504: 0x60f809  jalr        $v1
label_275508:
    if (ctx->pc == 0x275508u) {
        ctx->pc = 0x275508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275504u;
        // 0x275508: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27550Cu;
        goto label_27550c;
    }
    ctx->pc = 0x275504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27550Cu);
        ctx->pc = 0x275508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275504u;
        // 0x275508: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275504u, 0x27550Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27550Cu;
label_27550c:
    // 0x27550c: 0x8e061974  lw          $a2, 0x1974($s0)
    ctx->pc = 0x27550cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6516)));
label_275510:
    // 0x275510: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275514:
    if (ctx->pc == 0x275514u) {
        ctx->pc = 0x275514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275510u;
        // 0x275514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275518u;
        goto label_275518;
    }
    ctx->pc = 0x275510u;
    {
        const bool branch_taken_0x275510 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275510u;
        // 0x275514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275510) {
            ctx->pc = 0x27552Cu;
            goto label_27552c;
        }
    }
    ctx->pc = 0x275518u;
label_275518:
    // 0x275518: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27551c:
    // 0x27551c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275520:
    // 0x275520: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275524:
    // 0x275524: 0x60f809  jalr        $v1
label_275528:
    if (ctx->pc == 0x275528u) {
        ctx->pc = 0x275528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275524u;
        // 0x275528: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27552Cu;
        goto label_27552c;
    }
    ctx->pc = 0x275524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27552Cu);
        ctx->pc = 0x275528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275524u;
        // 0x275528: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275524u, 0x27552Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27552Cu;
label_27552c:
    // 0x27552c: 0x8e060740  lw          $a2, 0x740($s0)
    ctx->pc = 0x27552cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
label_275530:
    // 0x275530: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275534:
    if (ctx->pc == 0x275534u) {
        ctx->pc = 0x275534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275530u;
        // 0x275534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275538u;
        goto label_275538;
    }
    ctx->pc = 0x275530u;
    {
        const bool branch_taken_0x275530 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275530u;
        // 0x275534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275530) {
            ctx->pc = 0x27554Cu;
            goto label_27554c;
        }
    }
    ctx->pc = 0x275538u;
label_275538:
    // 0x275538: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27553c:
    // 0x27553c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27553cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275540:
    // 0x275540: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275544:
    // 0x275544: 0x60f809  jalr        $v1
label_275548:
    if (ctx->pc == 0x275548u) {
        ctx->pc = 0x275548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275544u;
        // 0x275548: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27554Cu;
        goto label_27554c;
    }
    ctx->pc = 0x275544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27554Cu);
        ctx->pc = 0x275548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275544u;
        // 0x275548: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275544u, 0x27554Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27554Cu;
label_27554c:
    // 0x27554c: 0x8e060744  lw          $a2, 0x744($s0)
    ctx->pc = 0x27554cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_275550:
    // 0x275550: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275554:
    if (ctx->pc == 0x275554u) {
        ctx->pc = 0x275554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275550u;
        // 0x275554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275558u;
        goto label_275558;
    }
    ctx->pc = 0x275550u;
    {
        const bool branch_taken_0x275550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275550u;
        // 0x275554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275550) {
            ctx->pc = 0x27556Cu;
            goto label_27556c;
        }
    }
    ctx->pc = 0x275558u;
label_275558:
    // 0x275558: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27555c:
    // 0x27555c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27555cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275560:
    // 0x275560: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275564:
    // 0x275564: 0x60f809  jalr        $v1
label_275568:
    if (ctx->pc == 0x275568u) {
        ctx->pc = 0x275568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275564u;
        // 0x275568: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27556Cu;
        goto label_27556c;
    }
    ctx->pc = 0x275564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27556Cu);
        ctx->pc = 0x275568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275564u;
        // 0x275568: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275564u, 0x27556Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27556Cu;
label_27556c:
    // 0x27556c: 0x8e060748  lw          $a2, 0x748($s0)
    ctx->pc = 0x27556cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_275570:
    // 0x275570: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275574:
    if (ctx->pc == 0x275574u) {
        ctx->pc = 0x275574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275570u;
        // 0x275574: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275578u;
        goto label_275578;
    }
    ctx->pc = 0x275570u;
    {
        const bool branch_taken_0x275570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275570u;
        // 0x275574: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275570) {
            ctx->pc = 0x27558Cu;
            goto label_27558c;
        }
    }
    ctx->pc = 0x275578u;
label_275578:
    // 0x275578: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27557c:
    // 0x27557c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_275580:
    // 0x275580: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x275580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_275584:
    // 0x275584: 0x60f809  jalr        $v1
label_275588:
    if (ctx->pc == 0x275588u) {
        ctx->pc = 0x275588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275584u;
        // 0x275588: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27558Cu;
        goto label_27558c;
    }
    ctx->pc = 0x275584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27558Cu);
        ctx->pc = 0x275588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275584u;
        // 0x275588: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275584u, 0x27558Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27558Cu;
label_27558c:
    // 0x27558c: 0x8e06074c  lw          $a2, 0x74C($s0)
    ctx->pc = 0x27558cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_275590:
    // 0x275590: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_275594:
    if (ctx->pc == 0x275594u) {
        ctx->pc = 0x275594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275590u;
        // 0x275594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275598u;
        goto label_275598;
    }
    ctx->pc = 0x275590u;
    {
        const bool branch_taken_0x275590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275590u;
        // 0x275594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275590) {
            ctx->pc = 0x2755ACu;
            goto label_2755ac;
        }
    }
    ctx->pc = 0x275598u;
label_275598:
    // 0x275598: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x275598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_27559c:
    // 0x27559c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x27559cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2755a0:
    // 0x2755a0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2755a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2755a4:
    // 0x2755a4: 0x60f809  jalr        $v1
label_2755a8:
    if (ctx->pc == 0x2755A8u) {
        ctx->pc = 0x2755A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755A4u;
        // 0x2755a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755ACu;
        goto label_2755ac;
    }
    ctx->pc = 0x2755A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2755ACu);
        ctx->pc = 0x2755A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755A4u;
        // 0x2755a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755A4u, 0x2755ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2755ACu;
label_2755ac:
    // 0x2755ac: 0x8e060750  lw          $a2, 0x750($s0)
    ctx->pc = 0x2755acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_2755b0:
    // 0x2755b0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2755b4:
    if (ctx->pc == 0x2755B4u) {
        ctx->pc = 0x2755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755B0u;
        // 0x2755b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755B8u;
        goto label_2755b8;
    }
    ctx->pc = 0x2755B0u;
    {
        const bool branch_taken_0x2755b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755B0u;
        // 0x2755b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755b0) {
            ctx->pc = 0x2755CCu;
            goto label_2755cc;
        }
    }
    ctx->pc = 0x2755B8u;
label_2755b8:
    // 0x2755b8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2755b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2755bc:
    // 0x2755bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2755bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2755c0:
    // 0x2755c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2755c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2755c4:
    // 0x2755c4: 0x60f809  jalr        $v1
label_2755c8:
    if (ctx->pc == 0x2755C8u) {
        ctx->pc = 0x2755C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755C4u;
        // 0x2755c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755CCu;
        goto label_2755cc;
    }
    ctx->pc = 0x2755C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2755CCu);
        ctx->pc = 0x2755C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755C4u;
        // 0x2755c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755C4u, 0x2755CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2755CCu;
label_2755cc:
    // 0x2755cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2755ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2755d0:
    // 0x2755d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2755d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2755d4:
    // 0x2755d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2755d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2755d8:
    // 0x2755d8: 0x3e00008  jr          $ra
label_2755dc:
    if (ctx->pc == 0x2755DCu) {
        ctx->pc = 0x2755DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755D8u;
        // 0x2755dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755E0u;
        goto label_fallthrough_0x2755d8;
    }
    ctx->pc = 0x2755D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2755DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755D8u;
        // 0x2755dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2755d8:
    ctx->pc = 0x2755E0u;
}
