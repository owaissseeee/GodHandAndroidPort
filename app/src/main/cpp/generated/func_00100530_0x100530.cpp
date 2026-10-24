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

// Function: func_00100530
// Address: 0x100530 - 0x100870
void func_00100530_0x100530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100530_0x100530");
#endif

    switch (ctx->pc) {
        case 0x100530u: goto label_100530;
        case 0x100534u: goto label_100534;
        case 0x100538u: goto label_100538;
        case 0x10053cu: goto label_10053c;
        case 0x100540u: goto label_100540;
        case 0x100544u: goto label_100544;
        case 0x100548u: goto label_100548;
        case 0x10054cu: goto label_10054c;
        case 0x100550u: goto label_100550;
        case 0x100554u: goto label_100554;
        case 0x100558u: goto label_100558;
        case 0x10055cu: goto label_10055c;
        case 0x100560u: goto label_100560;
        case 0x100564u: goto label_100564;
        case 0x100568u: goto label_100568;
        case 0x10056cu: goto label_10056c;
        case 0x100570u: goto label_100570;
        case 0x100574u: goto label_100574;
        case 0x100578u: goto label_100578;
        case 0x10057cu: goto label_10057c;
        case 0x100580u: goto label_100580;
        case 0x100584u: goto label_100584;
        case 0x100588u: goto label_100588;
        case 0x10058cu: goto label_10058c;
        case 0x100590u: goto label_100590;
        case 0x100594u: goto label_100594;
        case 0x100598u: goto label_100598;
        case 0x10059cu: goto label_10059c;
        case 0x1005a0u: goto label_1005a0;
        case 0x1005a4u: goto label_1005a4;
        case 0x1005a8u: goto label_1005a8;
        case 0x1005acu: goto label_1005ac;
        case 0x1005b0u: goto label_1005b0;
        case 0x1005b4u: goto label_1005b4;
        case 0x1005b8u: goto label_1005b8;
        case 0x1005bcu: goto label_1005bc;
        case 0x1005c0u: goto label_1005c0;
        case 0x1005c4u: goto label_1005c4;
        case 0x1005c8u: goto label_1005c8;
        case 0x1005ccu: goto label_1005cc;
        case 0x1005d0u: goto label_1005d0;
        case 0x1005d4u: goto label_1005d4;
        case 0x1005d8u: goto label_1005d8;
        case 0x1005dcu: goto label_1005dc;
        case 0x1005e0u: goto label_1005e0;
        case 0x1005e4u: goto label_1005e4;
        case 0x1005e8u: goto label_1005e8;
        case 0x1005ecu: goto label_1005ec;
        case 0x1005f0u: goto label_1005f0;
        case 0x1005f4u: goto label_1005f4;
        case 0x1005f8u: goto label_1005f8;
        case 0x1005fcu: goto label_1005fc;
        case 0x100600u: goto label_100600;
        case 0x100604u: goto label_100604;
        case 0x100608u: goto label_100608;
        case 0x10060cu: goto label_10060c;
        case 0x100610u: goto label_100610;
        case 0x100614u: goto label_100614;
        case 0x100618u: goto label_100618;
        case 0x10061cu: goto label_10061c;
        case 0x100620u: goto label_100620;
        case 0x100624u: goto label_100624;
        case 0x100628u: goto label_100628;
        case 0x10062cu: goto label_10062c;
        case 0x100630u: goto label_100630;
        case 0x100634u: goto label_100634;
        case 0x100638u: goto label_100638;
        case 0x10063cu: goto label_10063c;
        case 0x100640u: goto label_100640;
        case 0x100644u: goto label_100644;
        case 0x100648u: goto label_100648;
        case 0x10064cu: goto label_10064c;
        case 0x100650u: goto label_100650;
        case 0x100654u: goto label_100654;
        case 0x100658u: goto label_100658;
        case 0x10065cu: goto label_10065c;
        case 0x100660u: goto label_100660;
        case 0x100664u: goto label_100664;
        case 0x100668u: goto label_100668;
        case 0x10066cu: goto label_10066c;
        case 0x100670u: goto label_100670;
        case 0x100674u: goto label_100674;
        case 0x100678u: goto label_100678;
        case 0x10067cu: goto label_10067c;
        case 0x100680u: goto label_100680;
        case 0x100684u: goto label_100684;
        case 0x100688u: goto label_100688;
        case 0x10068cu: goto label_10068c;
        case 0x100690u: goto label_100690;
        case 0x100694u: goto label_100694;
        case 0x100698u: goto label_100698;
        case 0x10069cu: goto label_10069c;
        case 0x1006a0u: goto label_1006a0;
        case 0x1006a4u: goto label_1006a4;
        case 0x1006a8u: goto label_1006a8;
        case 0x1006acu: goto label_1006ac;
        case 0x1006b0u: goto label_1006b0;
        case 0x1006b4u: goto label_1006b4;
        case 0x1006b8u: goto label_1006b8;
        case 0x1006bcu: goto label_1006bc;
        case 0x1006c0u: goto label_1006c0;
        case 0x1006c4u: goto label_1006c4;
        case 0x1006c8u: goto label_1006c8;
        case 0x1006ccu: goto label_1006cc;
        case 0x1006d0u: goto label_1006d0;
        case 0x1006d4u: goto label_1006d4;
        case 0x1006d8u: goto label_1006d8;
        case 0x1006dcu: goto label_1006dc;
        case 0x1006e0u: goto label_1006e0;
        case 0x1006e4u: goto label_1006e4;
        case 0x1006e8u: goto label_1006e8;
        case 0x1006ecu: goto label_1006ec;
        case 0x1006f0u: goto label_1006f0;
        case 0x1006f4u: goto label_1006f4;
        case 0x1006f8u: goto label_1006f8;
        case 0x1006fcu: goto label_1006fc;
        case 0x100700u: goto label_100700;
        case 0x100704u: goto label_100704;
        case 0x100708u: goto label_100708;
        case 0x10070cu: goto label_10070c;
        case 0x100710u: goto label_100710;
        case 0x100714u: goto label_100714;
        case 0x100718u: goto label_100718;
        case 0x10071cu: goto label_10071c;
        case 0x100720u: goto label_100720;
        case 0x100724u: goto label_100724;
        case 0x100728u: goto label_100728;
        case 0x10072cu: goto label_10072c;
        case 0x100730u: goto label_100730;
        case 0x100734u: goto label_100734;
        case 0x100738u: goto label_100738;
        case 0x10073cu: goto label_10073c;
        case 0x100740u: goto label_100740;
        case 0x100744u: goto label_100744;
        case 0x100748u: goto label_100748;
        case 0x10074cu: goto label_10074c;
        case 0x100750u: goto label_100750;
        case 0x100754u: goto label_100754;
        case 0x100758u: goto label_100758;
        case 0x10075cu: goto label_10075c;
        case 0x100760u: goto label_100760;
        case 0x100764u: goto label_100764;
        case 0x100768u: goto label_100768;
        case 0x10076cu: goto label_10076c;
        case 0x100770u: goto label_100770;
        case 0x100774u: goto label_100774;
        case 0x100778u: goto label_100778;
        case 0x10077cu: goto label_10077c;
        case 0x100780u: goto label_100780;
        case 0x100784u: goto label_100784;
        case 0x100788u: goto label_100788;
        case 0x10078cu: goto label_10078c;
        case 0x100790u: goto label_100790;
        case 0x100794u: goto label_100794;
        case 0x100798u: goto label_100798;
        case 0x10079cu: goto label_10079c;
        case 0x1007a0u: goto label_1007a0;
        case 0x1007a4u: goto label_1007a4;
        case 0x1007a8u: goto label_1007a8;
        case 0x1007acu: goto label_1007ac;
        case 0x1007b0u: goto label_1007b0;
        case 0x1007b4u: goto label_1007b4;
        case 0x1007b8u: goto label_1007b8;
        case 0x1007bcu: goto label_1007bc;
        case 0x1007c0u: goto label_1007c0;
        case 0x1007c4u: goto label_1007c4;
        case 0x1007c8u: goto label_1007c8;
        case 0x1007ccu: goto label_1007cc;
        case 0x1007d0u: goto label_1007d0;
        case 0x1007d4u: goto label_1007d4;
        case 0x1007d8u: goto label_1007d8;
        case 0x1007dcu: goto label_1007dc;
        case 0x1007e0u: goto label_1007e0;
        case 0x1007e4u: goto label_1007e4;
        case 0x1007e8u: goto label_1007e8;
        case 0x1007ecu: goto label_1007ec;
        case 0x1007f0u: goto label_1007f0;
        case 0x1007f4u: goto label_1007f4;
        case 0x1007f8u: goto label_1007f8;
        case 0x1007fcu: goto label_1007fc;
        case 0x100800u: goto label_100800;
        case 0x100804u: goto label_100804;
        case 0x100808u: goto label_100808;
        case 0x10080cu: goto label_10080c;
        case 0x100810u: goto label_100810;
        case 0x100814u: goto label_100814;
        case 0x100818u: goto label_100818;
        case 0x10081cu: goto label_10081c;
        case 0x100820u: goto label_100820;
        case 0x100824u: goto label_100824;
        case 0x100828u: goto label_100828;
        case 0x10082cu: goto label_10082c;
        case 0x100830u: goto label_100830;
        case 0x100834u: goto label_100834;
        case 0x100838u: goto label_100838;
        case 0x10083cu: goto label_10083c;
        case 0x100840u: goto label_100840;
        case 0x100844u: goto label_100844;
        case 0x100848u: goto label_100848;
        case 0x10084cu: goto label_10084c;
        case 0x100850u: goto label_100850;
        case 0x100854u: goto label_100854;
        case 0x100858u: goto label_100858;
        case 0x10085cu: goto label_10085c;
        case 0x100860u: goto label_100860;
        case 0x100864u: goto label_100864;
        case 0x100868u: goto label_100868;
        case 0x10086cu: goto label_10086c;
        default: break;
    }

    ctx->pc = 0x100530u;

label_100530:
    // 0x100530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x100530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_100534:
    // 0x100534: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x100534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_100538:
    // 0x100538: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x100538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_10053c:
    // 0x10053c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_100540:
    // 0x100540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100544:
    // 0x100544: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x100544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_100548:
    // 0x100548: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_10054c:
    if (ctx->pc == 0x10054Cu) {
        ctx->pc = 0x10054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100548u;
        // 0x10054c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100550u;
        goto label_100550;
    }
    ctx->pc = 0x100548u;
    {
        const bool branch_taken_0x100548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100548u;
        // 0x10054c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100548) {
            ctx->pc = 0x10056Cu;
            goto label_10056c;
        }
    }
    ctx->pc = 0x100550u;
label_100550:
    // 0x100550: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x100550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_100554:
    // 0x100554: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x100554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_100558:
    // 0x100558: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x100558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_10055c:
    // 0x10055c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_100560:
    if (ctx->pc == 0x100560u) {
        ctx->pc = 0x100560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10055Cu;
        // 0x100560: 0x920302f4  lbu         $v1, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100564u;
        goto label_100564;
    }
    ctx->pc = 0x10055Cu;
    {
        const bool branch_taken_0x10055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10055c) {
            ctx->pc = 0x100560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10055Cu;
            // 0x100560: 0x920302f4  lbu         $v1, 0x2F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100594u;
            goto label_100594;
        }
    }
    ctx->pc = 0x100564u;
label_100564:
    // 0x100564: 0x100000be  b           . + 4 + (0xBE << 2)
label_100568:
    if (ctx->pc == 0x100568u) {
        ctx->pc = 0x100568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100564u;
        // 0x100568: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10056Cu;
        goto label_10056c;
    }
    ctx->pc = 0x100564u;
    {
        const bool branch_taken_0x100564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100564u;
        // 0x100568: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100564) {
            ctx->pc = 0x100860u;
            goto label_100860;
        }
    }
    ctx->pc = 0x10056Cu;
label_10056c:
    // 0x10056c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x10056cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_100570:
    // 0x100570: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x100570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
label_100574:
    // 0x100574: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_100578:
    if (ctx->pc == 0x100578u) {
        ctx->pc = 0x100578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100574u;
        // 0x100578: 0x24647a78  addiu       $a0, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10057Cu;
        goto label_10057c;
    }
    ctx->pc = 0x100574u;
    {
        const bool branch_taken_0x100574 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x100578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100574u;
        // 0x100578: 0x24647a78  addiu       $a0, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100574) {
            ctx->pc = 0x100590u;
            goto label_100590;
        }
    }
    ctx->pc = 0x10057Cu;
label_10057c:
    // 0x10057c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_100580:
    // 0x100580: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x100580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_100584:
    // 0x100584: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_100588:
    // 0x100588: 0x504000b5  beql        $v0, $zero, . + 4 + (0xB5 << 2)
label_10058c:
    if (ctx->pc == 0x10058Cu) {
        ctx->pc = 0x10058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100588u;
        // 0x10058c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100590u;
        goto label_100590;
    }
    ctx->pc = 0x100588u;
    {
        const bool branch_taken_0x100588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100588) {
            ctx->pc = 0x10058Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100588u;
            // 0x10058c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100860u;
            goto label_100860;
        }
    }
    ctx->pc = 0x100590u;
label_100590:
    // 0x100590: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x100590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_100594:
    // 0x100594: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_100598:
    if (ctx->pc == 0x100598u) {
        ctx->pc = 0x100598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100594u;
        // 0x100598: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10059Cu;
        goto label_10059c;
    }
    ctx->pc = 0x100594u;
    {
        const bool branch_taken_0x100594 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x100598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100594u;
        // 0x100598: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100594) {
            ctx->pc = 0x1005C4u;
            goto label_1005c4;
        }
    }
    ctx->pc = 0x10059Cu;
label_10059c:
    // 0x10059c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1005a0:
    if (ctx->pc == 0x1005A0u) {
        ctx->pc = 0x1005A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10059Cu;
        // 0x1005a0: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005A4u;
        goto label_1005a4;
    }
    ctx->pc = 0x10059Cu;
    {
        const bool branch_taken_0x10059c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10059c) {
            ctx->pc = 0x1005A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10059Cu;
            // 0x1005a0: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1005C8u;
            goto label_1005c8;
        }
    }
    ctx->pc = 0x1005A4u;
label_1005a4:
    // 0x1005a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1005a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1005a8:
    // 0x1005a8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_1005ac:
    if (ctx->pc == 0x1005ACu) {
        ctx->pc = 0x1005ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005A8u;
        // 0x1005ac: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005B0u;
        goto label_1005b0;
    }
    ctx->pc = 0x1005A8u;
    {
        const bool branch_taken_0x1005a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1005a8) {
            ctx->pc = 0x1005ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1005A8u;
            // 0x1005ac: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1005C8u;
            goto label_1005c8;
        }
    }
    ctx->pc = 0x1005B0u;
label_1005b0:
    // 0x1005b0: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1005b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1005b4:
    // 0x1005b4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1005b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1005b8:
    // 0x1005b8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1005b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1005bc:
    // 0x1005bc: 0x60f809  jalr        $v1
label_1005c0:
    if (ctx->pc == 0x1005C0u) {
        ctx->pc = 0x1005C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005BCu;
        // 0x1005c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005C4u;
        goto label_1005c4;
    }
    ctx->pc = 0x1005BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1005C4u);
        ctx->pc = 0x1005C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005BCu;
        // 0x1005c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1005BCu, 0x1005C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1005C4u;
label_1005c4:
    // 0x1005c4: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x1005c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_1005c8:
    // 0x1005c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1005c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1005cc:
    // 0x1005cc: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
label_1005d0:
    if (ctx->pc == 0x1005D0u) {
        ctx->pc = 0x1005D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005CCu;
        // 0x1005d0: 0x8e0320d0  lw          $v1, 0x20D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005D4u;
        goto label_1005d4;
    }
    ctx->pc = 0x1005CCu;
    {
        const bool branch_taken_0x1005cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005cc) {
            ctx->pc = 0x1005D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1005CCu;
            // 0x1005d0: 0x8e0320d0  lw          $v1, 0x20D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1006F8u;
            goto label_1006f8;
        }
    }
    ctx->pc = 0x1005D4u;
label_1005d4:
    // 0x1005d4: 0x8e0220d0  lw          $v0, 0x20D0($s0)
    ctx->pc = 0x1005d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_1005d8:
    // 0x1005d8: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_1005dc:
    if (ctx->pc == 0x1005DCu) {
        ctx->pc = 0x1005E0u;
        goto label_1005e0;
    }
    ctx->pc = 0x1005D8u;
    {
        const bool branch_taken_0x1005d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005d8) {
            ctx->pc = 0x100828u;
            goto label_100828;
        }
    }
    ctx->pc = 0x1005E0u;
label_1005e0:
    // 0x1005e0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1005e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1005e4:
    // 0x1005e4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1005e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1005e8:
    // 0x1005e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1005ec:
    if (ctx->pc == 0x1005ECu) {
        ctx->pc = 0x1005ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005E8u;
        // 0x1005ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005F0u;
        goto label_1005f0;
    }
    ctx->pc = 0x1005E8u;
    {
        const bool branch_taken_0x1005e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005E8u;
        // 0x1005ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005e8) {
            ctx->pc = 0x1005FCu;
            goto label_1005fc;
        }
    }
    ctx->pc = 0x1005F0u;
label_1005f0:
    // 0x1005f0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1005f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1005f4:
    // 0x1005f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1005f8:
    if (ctx->pc == 0x1005F8u) {
        ctx->pc = 0x1005F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F4u;
        // 0x1005f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005FCu;
        goto label_1005fc;
    }
    ctx->pc = 0x1005F4u;
    {
        const bool branch_taken_0x1005f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F4u;
        // 0x1005f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005f4) {
            ctx->pc = 0x100600u;
            goto label_100600;
        }
    }
    ctx->pc = 0x1005FCu;
label_1005fc:
    // 0x1005fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1005fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100600:
    // 0x100600: 0x8e0520d0  lw          $a1, 0x20D0($s0)
    ctx->pc = 0x100600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_100604:
    // 0x100604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100608:
    // 0x100608: 0x8e0420d4  lw          $a0, 0x20D4($s0)
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8404)));
label_10060c:
    // 0x10060c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x10060cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
label_100610:
    // 0x100610: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_100614:
    if (ctx->pc == 0x100614u) {
        ctx->pc = 0x100614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100610u;
        // 0x100614: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100618u;
        goto label_100618;
    }
    ctx->pc = 0x100610u;
    {
        const bool branch_taken_0x100610 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x100614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100610u;
        // 0x100614: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100610) {
            ctx->pc = 0x10061Cu;
            goto label_10061c;
        }
    }
    ctx->pc = 0x100618u;
label_100618:
    // 0x100618: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x100618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10061c:
    // 0x10061c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100620:
    // 0x100620: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_100624:
    if (ctx->pc == 0x100624u) {
        ctx->pc = 0x100624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100620u;
        // 0x100624: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100628u;
        goto label_100628;
    }
    ctx->pc = 0x100620u;
    {
        const bool branch_taken_0x100620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100620u;
        // 0x100624: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100620) {
            ctx->pc = 0x100638u;
            goto label_100638;
        }
    }
    ctx->pc = 0x100628u;
label_100628:
    // 0x100628: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x100628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_10062c:
    // 0x10062c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100630:
    // 0x100630: 0x10000002  b           . + 4 + (0x2 << 2)
label_100634:
    if (ctx->pc == 0x100634u) {
        ctx->pc = 0x100634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100630u;
        // 0x100634: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100638u;
        goto label_100638;
    }
    ctx->pc = 0x100630u;
    {
        const bool branch_taken_0x100630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100630u;
        // 0x100634: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100630) {
            ctx->pc = 0x10063Cu;
            goto label_10063c;
        }
    }
    ctx->pc = 0x100638u;
label_100638:
    // 0x100638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10063c:
    // 0x10063c: 0x50c0002e  beql        $a2, $zero, . + 4 + (0x2E << 2)
label_100640:
    if (ctx->pc == 0x100640u) {
        ctx->pc = 0x100640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10063Cu;
        // 0x100640: 0x8e0320d0  lw          $v1, 0x20D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100644u;
        goto label_100644;
    }
    ctx->pc = 0x10063Cu;
    {
        const bool branch_taken_0x10063c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10063c) {
            ctx->pc = 0x100640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10063Cu;
            // 0x100640: 0x8e0320d0  lw          $v1, 0x20D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1006F8u;
            goto label_1006f8;
        }
    }
    ctx->pc = 0x100644u;
label_100644:
    // 0x100644: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_100648:
    if (ctx->pc == 0x100648u) {
        ctx->pc = 0x100648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100644u;
        // 0x100648: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10064Cu;
        goto label_10064c;
    }
    ctx->pc = 0x100644u;
    {
        const bool branch_taken_0x100644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100644u;
        // 0x100648: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100644) {
            ctx->pc = 0x1006F4u;
            goto label_1006f4;
        }
    }
    ctx->pc = 0x10064Cu;
label_10064c:
    // 0x10064c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x10064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_100650:
    // 0x100650: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x100650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_100654:
    // 0x100654: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x100654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_100658:
    // 0x100658: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x100658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_10065c:
    // 0x10065c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10065cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_100660:
    // 0x100660: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x100660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_100664:
    // 0x100664: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x100664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_100668:
    // 0x100668: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x100668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10066c:
    // 0x10066c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10066cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_100670:
    // 0x100670: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x100670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_100674:
    // 0x100674: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
label_100678:
    if (ctx->pc == 0x100678u) {
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100674u;
        // 0x100678: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10067Cu;
        goto label_10067c;
    }
    ctx->pc = 0x100674u;
    {
        const bool branch_taken_0x100674 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100674u;
        // 0x100678: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x100674) {
            ctx->pc = 0x100690u;
            goto label_100690;
        }
    }
    ctx->pc = 0x10067Cu;
label_10067c:
    // 0x10067c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_100680:
    // 0x100680: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x100680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_100684:
    // 0x100684: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x100684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_100688:
    // 0x100688: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x100688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_10068c:
    // 0x10068c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x10068cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_100690:
    // 0x100690: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x100690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_100694:
    // 0x100694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100698:
    // 0x100698: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x100698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_10069c:
    // 0x10069c: 0x26052050  addiu       $a1, $s0, 0x2050
    ctx->pc = 0x10069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8272));
label_1006a0:
    // 0x1006a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1006a4:
    if (ctx->pc == 0x1006A4u) {
        ctx->pc = 0x1006A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006A0u;
        // 0x1006a4: 0x260604d0  addiu       $a2, $s0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006A8u;
        goto label_1006a8;
    }
    ctx->pc = 0x1006A0u;
    {
        const bool branch_taken_0x1006a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006A0u;
        // 0x1006a4: 0x260604d0  addiu       $a2, $s0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006a0) {
            ctx->pc = 0x1006ECu;
            goto label_1006ec;
        }
    }
    ctx->pc = 0x1006A8u;
label_1006a8:
    // 0x1006a8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1006a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1006ac:
    // 0x1006ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1006b0:
    // 0x1006b0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x1006b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1006b4:
    // 0x1006b4: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x1006b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1006b8:
    // 0x1006b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1006b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1006bc:
    // 0x1006bc: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x1006bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1006c0:
    // 0x1006c0: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x1006c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_1006c4:
    // 0x1006c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1006c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1006c8:
    // 0x1006c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1006c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1006cc:
    // 0x1006cc: 0xe46200b4  swc1        $f2, 0xB4($v1)
    ctx->pc = 0x1006ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_1006d0:
    // 0x1006d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1006d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1006d4:
    // 0x1006d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1006d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1006d8:
    // 0x1006d8: 0xe46300b8  swc1        $f3, 0xB8($v1)
    ctx->pc = 0x1006d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_1006dc:
    // 0x1006dc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1006dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1006e0:
    // 0x1006e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1006e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1006e4:
    // 0x1006e4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1006e8:
    if (ctx->pc == 0x1006E8u) {
        ctx->pc = 0x1006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E4u;
        // 0x1006e8: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006ECu;
        goto label_1006ec;
    }
    ctx->pc = 0x1006E4u;
    {
        const bool branch_taken_0x1006e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E4u;
        // 0x1006e8: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006e4) {
            ctx->pc = 0x1006A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1006a8;
        }
    }
    ctx->pc = 0x1006ECu;
label_1006ec:
    // 0x1006ec: 0xc041f1a  jal         func_107C68
label_1006f0:
    if (ctx->pc == 0x1006F0u) {
        ctx->pc = 0x1006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006ECu;
        // 0x1006f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006F4u;
        goto label_1006f4;
    }
    ctx->pc = 0x1006ECu;
    SET_GPR_U32(ctx, 31, 0x1006F4u);
    ctx->pc = 0x1006F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1006ECu;
    // 0x1006f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x1006ECu, 0x1006F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1006F4u;
label_1006f4:
    // 0x1006f4: 0x8e0320d0  lw          $v1, 0x20D0($s0)
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_1006f8:
    // 0x1006f8: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_1006fc:
    if (ctx->pc == 0x1006FCu) {
        ctx->pc = 0x1006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006F8u;
        // 0x1006fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100700u;
        goto label_100700;
    }
    ctx->pc = 0x1006F8u;
    {
        const bool branch_taken_0x1006f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006F8u;
        // 0x1006fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006f8) {
            ctx->pc = 0x100828u;
            goto label_100828;
        }
    }
    ctx->pc = 0x100700u;
label_100700:
    // 0x100700: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x100700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_100704:
    // 0x100704: 0x8e0420d4  lw          $a0, 0x20D4($s0)
    ctx->pc = 0x100704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8404)));
label_100708:
    // 0x100708: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_10070c:
    if (ctx->pc == 0x10070Cu) {
        ctx->pc = 0x10070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100708u;
        // 0x10070c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100710u;
        goto label_100710;
    }
    ctx->pc = 0x100708u;
    {
        const bool branch_taken_0x100708 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x10070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100708u;
        // 0x10070c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100708) {
            ctx->pc = 0x100714u;
            goto label_100714;
        }
    }
    ctx->pc = 0x100710u;
label_100710:
    // 0x100710: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x100710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_100714:
    // 0x100714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100718:
    // 0x100718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10071c:
    if (ctx->pc == 0x10071Cu) {
        ctx->pc = 0x10071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100718u;
        // 0x10071c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100720u;
        goto label_100720;
    }
    ctx->pc = 0x100718u;
    {
        const bool branch_taken_0x100718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100718u;
        // 0x10071c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100718) {
            ctx->pc = 0x100730u;
            goto label_100730;
        }
    }
    ctx->pc = 0x100720u;
label_100720:
    // 0x100720: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x100720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_100724:
    // 0x100724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100728:
    // 0x100728: 0x10000002  b           . + 4 + (0x2 << 2)
label_10072c:
    if (ctx->pc == 0x10072Cu) {
        ctx->pc = 0x10072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100728u;
        // 0x10072c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100730u;
        goto label_100730;
    }
    ctx->pc = 0x100728u;
    {
        const bool branch_taken_0x100728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100728u;
        // 0x10072c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100728) {
            ctx->pc = 0x100734u;
            goto label_100734;
        }
    }
    ctx->pc = 0x100730u;
label_100730:
    // 0x100730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100734:
    // 0x100734: 0x8e0220d0  lw          $v0, 0x20D0($s0)
    ctx->pc = 0x100734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_100738:
    // 0x100738: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x100738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_10073c:
    // 0x10073c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x10073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_100740:
    // 0x100740: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_100744:
    if (ctx->pc == 0x100744u) {
        ctx->pc = 0x100748u;
        goto label_100748;
    }
    ctx->pc = 0x100740u;
    {
        const bool branch_taken_0x100740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x100740) {
            ctx->pc = 0x100760u;
            goto label_100760;
        }
    }
    ctx->pc = 0x100748u;
label_100748:
    // 0x100748: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x100748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10074c:
    // 0x10074c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x10074cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_100750:
    // 0x100750: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x100750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_100754:
    // 0x100754: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x100754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_100758:
    // 0x100758: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x100758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10075c:
    // 0x10075c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x10075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_100760:
    // 0x100760: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_100764:
    if (ctx->pc == 0x100764u) {
        ctx->pc = 0x100764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100760u;
        // 0x100764: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100768u;
        goto label_100768;
    }
    ctx->pc = 0x100760u;
    {
        const bool branch_taken_0x100760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100760u;
        // 0x100764: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100760) {
            ctx->pc = 0x1007B0u;
            goto label_1007b0;
        }
    }
    ctx->pc = 0x100768u;
label_100768:
    // 0x100768: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x100768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_10076c:
    // 0x10076c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_100770:
    if (ctx->pc == 0x100770u) {
        ctx->pc = 0x100770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10076Cu;
        // 0x100770: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100774u;
        goto label_100774;
    }
    ctx->pc = 0x10076Cu;
    {
        const bool branch_taken_0x10076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10076Cu;
        // 0x100770: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10076c) {
            ctx->pc = 0x100780u;
            goto label_100780;
        }
    }
    ctx->pc = 0x100774u;
label_100774:
    // 0x100774: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x100774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_100778:
    // 0x100778: 0x10000002  b           . + 4 + (0x2 << 2)
label_10077c:
    if (ctx->pc == 0x10077Cu) {
        ctx->pc = 0x10077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100778u;
        // 0x10077c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100780u;
        goto label_100780;
    }
    ctx->pc = 0x100778u;
    {
        const bool branch_taken_0x100778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100778u;
        // 0x10077c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100778) {
            ctx->pc = 0x100784u;
            goto label_100784;
        }
    }
    ctx->pc = 0x100780u;
label_100780:
    // 0x100780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100784:
    // 0x100784: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x100784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_100788:
    // 0x100788: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_10078c:
    // 0x10078c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_100790:
    if (ctx->pc == 0x100790u) {
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100794u;
        goto label_100794;
    }
    ctx->pc = 0x10078Cu;
    {
        const bool branch_taken_0x10078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10078c) {
            ctx->pc = 0x100790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10078Cu;
            // 0x100790: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007B0u;
            goto label_1007b0;
        }
    }
    ctx->pc = 0x100794u;
label_100794:
    // 0x100794: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x100794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_100798:
    // 0x100798: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x100798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_10079c:
    // 0x10079c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x10079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1007a0:
    // 0x1007a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1007a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1007a4:
    // 0x1007a4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1007a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1007a8:
    // 0x1007a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1007a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1007ac:
    // 0x1007ac: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x1007acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1007b0:
    // 0x1007b0: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x1007b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_1007b4:
    // 0x1007b4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1007b8:
    if (ctx->pc == 0x1007B8u) {
        ctx->pc = 0x1007B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007B4u;
        // 0x1007b8: 0x8e0420d0  lw          $a0, 0x20D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007BCu;
        goto label_1007bc;
    }
    ctx->pc = 0x1007B4u;
    {
        const bool branch_taken_0x1007b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1007b4) {
            ctx->pc = 0x1007B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1007B4u;
            // 0x1007b8: 0x8e0420d0  lw          $a0, 0x20D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007D8u;
            goto label_1007d8;
        }
    }
    ctx->pc = 0x1007BCu;
label_1007bc:
    // 0x1007bc: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x1007bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1007c0:
    // 0x1007c0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1007c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1007c4:
    // 0x1007c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1007c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1007c8:
    // 0x1007c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1007c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1007cc:
    // 0x1007cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1007ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1007d0:
    // 0x1007d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1007d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1007d4:
    // 0x1007d4: 0x8e0420d0  lw          $a0, 0x20D0($s0)
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_1007d8:
    // 0x1007d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1007d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1007dc:
    // 0x1007dc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1007dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1007e0:
    // 0x1007e0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1007e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_1007e4:
    // 0x1007e4: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x1007e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1007e8:
    // 0x1007e8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1007e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_1007ec:
    // 0x1007ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1007ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1007f0:
    // 0x1007f0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1007f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_1007f4:
    // 0x1007f4: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1007f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_1007f8:
    // 0x1007f8: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1007f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_1007fc:
    // 0x1007fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1007fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_100800:
    // 0x100800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_100804:
    // 0x100804: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x100804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_100808:
    // 0x100808: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_10080c:
    // 0x10080c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_100810:
    // 0x100810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_100814:
    if (ctx->pc == 0x100814u) {
        ctx->pc = 0x100814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100810u;
        // 0x100814: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100818u;
        goto label_100818;
    }
    ctx->pc = 0x100810u;
    {
        const bool branch_taken_0x100810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100810u;
        // 0x100814: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100810) {
            ctx->pc = 0x100824u;
            goto label_100824;
        }
    }
    ctx->pc = 0x100818u;
label_100818:
    // 0x100818: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_10081c:
    // 0x10081c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_100820:
    // 0x100820: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x100820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_100824:
    // 0x100824: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x100824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_100828:
    // 0x100828: 0xc0527ae  jal         func_149EB8
label_10082c:
    if (ctx->pc == 0x10082Cu) {
        ctx->pc = 0x10082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100828u;
        // 0x10082c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100830u;
        goto label_100830;
    }
    ctx->pc = 0x100828u;
    SET_GPR_U32(ctx, 31, 0x100830u);
    ctx->pc = 0x10082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100828u;
    // 0x10082c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x100828u, 0x100830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100830u;
label_100830:
    // 0x100830: 0xc040338  jal         func_100CE0
label_100834:
    if (ctx->pc == 0x100834u) {
        ctx->pc = 0x100834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100830u;
        // 0x100834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100838u;
        goto label_100838;
    }
    ctx->pc = 0x100830u;
    SET_GPR_U32(ctx, 31, 0x100838u);
    ctx->pc = 0x100834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100830u;
    // 0x100834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CE0u, 0x100830u, 0x100838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100838u;
label_100838:
    // 0x100838: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x100838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_10083c:
    // 0x10083c: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_100840:
    // 0x100840: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_100844:
    if (ctx->pc == 0x100844u) {
        ctx->pc = 0x100844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100840u;
        // 0x100844: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100848u;
        goto label_100848;
    }
    ctx->pc = 0x100840u;
    {
        const bool branch_taken_0x100840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100840u;
        // 0x100844: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100840) {
            ctx->pc = 0x100860u;
            goto label_100860;
        }
    }
    ctx->pc = 0x100848u;
label_100848:
    // 0x100848: 0xc0b6dac  jal         func_2DB6B0
label_10084c:
    if (ctx->pc == 0x10084Cu) {
        ctx->pc = 0x100850u;
        goto label_100850;
    }
    ctx->pc = 0x100848u;
    SET_GPR_U32(ctx, 31, 0x100850u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x100848u, 0x100850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100850u;
label_100850:
    // 0x100850: 0xac400658  sw          $zero, 0x658($v0)
    ctx->pc = 0x100850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1624), GPR_U32(ctx, 0));
label_100854:
    // 0x100854: 0xac400650  sw          $zero, 0x650($v0)
    ctx->pc = 0x100854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1616), GPR_U32(ctx, 0));
label_100858:
    // 0x100858: 0xac400654  sw          $zero, 0x654($v0)
    ctx->pc = 0x100858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1620), GPR_U32(ctx, 0));
label_10085c:
    // 0x10085c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10085cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_100860:
    // 0x100860: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_100864:
    // 0x100864: 0x3e00008  jr          $ra
label_100868:
    if (ctx->pc == 0x100868u) {
        ctx->pc = 0x100868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100864u;
        // 0x100868: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10086Cu;
        goto label_10086c;
    }
    ctx->pc = 0x100864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100864u;
        // 0x100868: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10086Cu;
label_10086c:
    // 0x10086c: 0x0  nop
    ctx->pc = 0x10086cu;
    // NOP
    ctx->pc = 0x100870u;
}
