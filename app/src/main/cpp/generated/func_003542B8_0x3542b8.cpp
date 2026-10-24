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

// Function: func_003542B8
// Address: 0x3542b8 - 0x354430
void func_003542B8_0x3542b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003542B8_0x3542b8");
#endif

    switch (ctx->pc) {
        case 0x3542b8u: goto label_3542b8;
        case 0x3542bcu: goto label_3542bc;
        case 0x3542c0u: goto label_3542c0;
        case 0x3542c4u: goto label_3542c4;
        case 0x3542c8u: goto label_3542c8;
        case 0x3542ccu: goto label_3542cc;
        case 0x3542d0u: goto label_3542d0;
        case 0x3542d4u: goto label_3542d4;
        case 0x3542d8u: goto label_3542d8;
        case 0x3542dcu: goto label_3542dc;
        case 0x3542e0u: goto label_3542e0;
        case 0x3542e4u: goto label_3542e4;
        case 0x3542e8u: goto label_3542e8;
        case 0x3542ecu: goto label_3542ec;
        case 0x3542f0u: goto label_3542f0;
        case 0x3542f4u: goto label_3542f4;
        case 0x3542f8u: goto label_3542f8;
        case 0x3542fcu: goto label_3542fc;
        case 0x354300u: goto label_354300;
        case 0x354304u: goto label_354304;
        case 0x354308u: goto label_354308;
        case 0x35430cu: goto label_35430c;
        case 0x354310u: goto label_354310;
        case 0x354314u: goto label_354314;
        case 0x354318u: goto label_354318;
        case 0x35431cu: goto label_35431c;
        case 0x354320u: goto label_354320;
        case 0x354324u: goto label_354324;
        case 0x354328u: goto label_354328;
        case 0x35432cu: goto label_35432c;
        case 0x354330u: goto label_354330;
        case 0x354334u: goto label_354334;
        case 0x354338u: goto label_354338;
        case 0x35433cu: goto label_35433c;
        case 0x354340u: goto label_354340;
        case 0x354344u: goto label_354344;
        case 0x354348u: goto label_354348;
        case 0x35434cu: goto label_35434c;
        case 0x354350u: goto label_354350;
        case 0x354354u: goto label_354354;
        case 0x354358u: goto label_354358;
        case 0x35435cu: goto label_35435c;
        case 0x354360u: goto label_354360;
        case 0x354364u: goto label_354364;
        case 0x354368u: goto label_354368;
        case 0x35436cu: goto label_35436c;
        case 0x354370u: goto label_354370;
        case 0x354374u: goto label_354374;
        case 0x354378u: goto label_354378;
        case 0x35437cu: goto label_35437c;
        case 0x354380u: goto label_354380;
        case 0x354384u: goto label_354384;
        case 0x354388u: goto label_354388;
        case 0x35438cu: goto label_35438c;
        case 0x354390u: goto label_354390;
        case 0x354394u: goto label_354394;
        case 0x354398u: goto label_354398;
        case 0x35439cu: goto label_35439c;
        case 0x3543a0u: goto label_3543a0;
        case 0x3543a4u: goto label_3543a4;
        case 0x3543a8u: goto label_3543a8;
        case 0x3543acu: goto label_3543ac;
        case 0x3543b0u: goto label_3543b0;
        case 0x3543b4u: goto label_3543b4;
        case 0x3543b8u: goto label_3543b8;
        case 0x3543bcu: goto label_3543bc;
        case 0x3543c0u: goto label_3543c0;
        case 0x3543c4u: goto label_3543c4;
        case 0x3543c8u: goto label_3543c8;
        case 0x3543ccu: goto label_3543cc;
        case 0x3543d0u: goto label_3543d0;
        case 0x3543d4u: goto label_3543d4;
        case 0x3543d8u: goto label_3543d8;
        case 0x3543dcu: goto label_3543dc;
        case 0x3543e0u: goto label_3543e0;
        case 0x3543e4u: goto label_3543e4;
        case 0x3543e8u: goto label_3543e8;
        case 0x3543ecu: goto label_3543ec;
        case 0x3543f0u: goto label_3543f0;
        case 0x3543f4u: goto label_3543f4;
        case 0x3543f8u: goto label_3543f8;
        case 0x3543fcu: goto label_3543fc;
        case 0x354400u: goto label_354400;
        case 0x354404u: goto label_354404;
        case 0x354408u: goto label_354408;
        case 0x35440cu: goto label_35440c;
        case 0x354410u: goto label_354410;
        case 0x354414u: goto label_354414;
        case 0x354418u: goto label_354418;
        case 0x35441cu: goto label_35441c;
        case 0x354420u: goto label_354420;
        case 0x354424u: goto label_354424;
        case 0x354428u: goto label_354428;
        case 0x35442cu: goto label_35442c;
        default: break;
    }

    ctx->pc = 0x3542b8u;

label_3542b8:
    // 0x3542b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3542b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3542bc:
    // 0x3542bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3542bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3542c0:
    // 0x3542c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3542c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3542c4:
    // 0x3542c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3542c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3542c8:
    // 0x3542c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3542c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3542cc:
    // 0x3542cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3542ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3542d0:
    // 0x3542d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3542d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_3542d4:
    // 0x3542d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3542d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3542d8:
    // 0x3542d8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3542d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_3542dc:
    // 0x3542dc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3542dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3542e0:
    // 0x3542e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3542e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3542e4:
    // 0x3542e4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3542e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3542e8:
    // 0x3542e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3542e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3542ec:
    // 0x3542ec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3542ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3542f0:
    // 0x3542f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3542f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3542f4:
    // 0x3542f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3542f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3542f8:
    // 0x3542f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3542f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3542fc:
    // 0x3542fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3542fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_354300:
    // 0x354300: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x354300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_354304:
    // 0x354304: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x354304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_354308:
    // 0x354308: 0x40f809  jalr        $v0
label_35430c:
    if (ctx->pc == 0x35430Cu) {
        ctx->pc = 0x35430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354308u;
        // 0x35430c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354310u;
        goto label_354310;
    }
    ctx->pc = 0x354308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x354310u);
        ctx->pc = 0x35430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354308u;
        // 0x35430c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354308u, 0x354310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354310u;
label_354310:
    // 0x354310: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x354310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_354314:
    // 0x354314: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x354314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_354318:
    // 0x354318: 0xc0da4dc  jal         func_369370
label_35431c:
    if (ctx->pc == 0x35431Cu) {
        ctx->pc = 0x35431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354318u;
        // 0x35431c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354320u;
        goto label_354320;
    }
    ctx->pc = 0x354318u;
    SET_GPR_U32(ctx, 31, 0x354320u);
    ctx->pc = 0x35431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354318u;
    // 0x35431c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x354318u, 0x354320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354320u;
label_354320:
    // 0x354320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x354320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354324:
    // 0x354324: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_354328:
    if (ctx->pc == 0x354328u) {
        ctx->pc = 0x354328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354324u;
        // 0x354328: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35432Cu;
        goto label_35432c;
    }
    ctx->pc = 0x354324u;
    {
        const bool branch_taken_0x354324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354324u;
        // 0x354328: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354324) {
            ctx->pc = 0x3543D0u;
            goto label_3543d0;
        }
    }
    ctx->pc = 0x35432Cu;
label_35432c:
    // 0x35432c: 0xc0da476  jal         func_3691D8
label_354330:
    if (ctx->pc == 0x354330u) {
        ctx->pc = 0x354330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35432Cu;
        // 0x354330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354334u;
        goto label_354334;
    }
    ctx->pc = 0x35432Cu;
    SET_GPR_U32(ctx, 31, 0x354334u);
    ctx->pc = 0x354330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35432Cu;
    // 0x354330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x35432Cu, 0x354334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354334u;
label_354334:
    // 0x354334: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x354334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_354338:
    // 0x354338: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_35433c:
    if (ctx->pc == 0x35433Cu) {
        ctx->pc = 0x35433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354338u;
        // 0x35433c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354340u;
        goto label_354340;
    }
    ctx->pc = 0x354338u;
    {
        const bool branch_taken_0x354338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354338u;
        // 0x35433c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354338) {
            ctx->pc = 0x3543F0u;
            goto label_3543f0;
        }
    }
    ctx->pc = 0x354340u;
label_354340:
    // 0x354340: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x354340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_354344:
    // 0x354344: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x354344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_354348:
    // 0x354348: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x354348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_35434c:
    // 0x35434c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x35434cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_354350:
    // 0x354350: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_354354:
    if (ctx->pc == 0x354354u) {
        ctx->pc = 0x354354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354350u;
        // 0x354354: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354358u;
        goto label_354358;
    }
    ctx->pc = 0x354350u;
    {
        const bool branch_taken_0x354350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354350u;
        // 0x354354: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354350) {
            ctx->pc = 0x3543D0u;
            goto label_3543d0;
        }
    }
    ctx->pc = 0x354358u;
label_354358:
    // 0x354358: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x354358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_35435c:
    // 0x35435c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354360:
    // 0x354360: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x354360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_354364:
    // 0x354364: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x354364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_354368:
    // 0x354368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35436c:
    // 0x35436c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x35436cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_354370:
    // 0x354370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_354374:
    // 0x354374: 0x8c639730  lw          $v1, -0x68D0($v1)
    ctx->pc = 0x354374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940464)));
label_354378:
    // 0x354378: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
label_35437c:
    if (ctx->pc == 0x35437Cu) {
        ctx->pc = 0x35437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354378u;
        // 0x35437c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354380u;
        goto label_354380;
    }
    ctx->pc = 0x354378u;
    {
        const bool branch_taken_0x354378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354378u;
        // 0x35437c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354378) {
            ctx->pc = 0x3543F0u;
            goto label_3543f0;
        }
    }
    ctx->pc = 0x354380u;
label_354380:
    // 0x354380: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x354380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_354384:
    // 0x354384: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x354384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_354388:
    // 0x354388: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x354388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_35438c:
    // 0x35438c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354390:
    // 0x354390: 0xc0da4dc  jal         func_369370
label_354394:
    if (ctx->pc == 0x354394u) {
        ctx->pc = 0x354394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354390u;
        // 0x354394: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354398u;
        goto label_354398;
    }
    ctx->pc = 0x354390u;
    SET_GPR_U32(ctx, 31, 0x354398u);
    ctx->pc = 0x354394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354390u;
    // 0x354394: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x354390u, 0x354398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354398u;
label_354398:
    // 0x354398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x354398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35439c:
    // 0x35439c: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_3543a0:
    if (ctx->pc == 0x3543A0u) {
        ctx->pc = 0x3543A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35439Cu;
        // 0x3543a0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3543A4u;
        goto label_3543a4;
    }
    ctx->pc = 0x35439Cu;
    {
        const bool branch_taken_0x35439c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35439c) {
            ctx->pc = 0x3543A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35439Cu;
            // 0x3543a0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3543F4u;
            goto label_3543f4;
        }
    }
    ctx->pc = 0x3543A4u;
label_3543a4:
    // 0x3543a4: 0xc0da476  jal         func_3691D8
label_3543a8:
    if (ctx->pc == 0x3543A8u) {
        ctx->pc = 0x3543A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543A4u;
        // 0x3543a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3543ACu;
        goto label_3543ac;
    }
    ctx->pc = 0x3543A4u;
    SET_GPR_U32(ctx, 31, 0x3543ACu);
    ctx->pc = 0x3543A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3543A4u;
    // 0x3543a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x3543A4u, 0x3543ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543ACu;
label_3543ac:
    // 0x3543ac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3543acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3543b0:
    // 0x3543b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3543b4:
    if (ctx->pc == 0x3543B4u) {
        ctx->pc = 0x3543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543B0u;
        // 0x3543b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3543B8u;
        goto label_3543b8;
    }
    ctx->pc = 0x3543B0u;
    {
        const bool branch_taken_0x3543b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543B0u;
        // 0x3543b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543b0) {
            ctx->pc = 0x3543F0u;
            goto label_3543f0;
        }
    }
    ctx->pc = 0x3543B8u;
label_3543b8:
    // 0x3543b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3543b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3543bc:
    // 0x3543bc: 0xc0da4dc  jal         func_369370
label_3543c0:
    if (ctx->pc == 0x3543C0u) {
        ctx->pc = 0x3543C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543BCu;
        // 0x3543c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3543C4u;
        goto label_3543c4;
    }
    ctx->pc = 0x3543BCu;
    SET_GPR_U32(ctx, 31, 0x3543C4u);
    ctx->pc = 0x3543C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3543BCu;
    // 0x3543c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x3543BCu, 0x3543C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543C4u;
label_3543c4:
    // 0x3543c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3543c8:
    if (ctx->pc == 0x3543C8u) {
        ctx->pc = 0x3543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543C4u;
        // 0x3543c8: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3543CCu;
        goto label_3543cc;
    }
    ctx->pc = 0x3543C4u;
    {
        const bool branch_taken_0x3543c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543C4u;
        // 0x3543c8: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543c4) {
            ctx->pc = 0x3543E8u;
            goto label_3543e8;
        }
    }
    ctx->pc = 0x3543CCu;
label_3543cc:
    // 0x3543cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3543ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_3543d0:
    // 0x3543d0: 0x2463e2f0  addiu       $v1, $v1, -0x1D10
    ctx->pc = 0x3543d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959856));
label_3543d4:
    // 0x3543d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3543d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3543d8:
    // 0x3543d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3543d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3543dc:
    // 0x3543dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3543e0:
    if (ctx->pc == 0x3543E0u) {
        ctx->pc = 0x3543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543DCu;
        // 0x3543e0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3543E4u;
        goto label_3543e4;
    }
    ctx->pc = 0x3543DCu;
    {
        const bool branch_taken_0x3543dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3543DCu;
        // 0x3543e0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3543dc) {
            ctx->pc = 0x3543F0u;
            goto label_3543f0;
        }
    }
    ctx->pc = 0x3543E4u;
label_3543e4:
    // 0x3543e4: 0x0  nop
    ctx->pc = 0x3543e4u;
    // NOP
label_3543e8:
    // 0x3543e8: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x3543e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_3543ec:
    // 0x3543ec: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3543ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3543f0:
    // 0x3543f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3543f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3543f4:
    // 0x3543f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3543f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3543f8:
    // 0x3543f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3543f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3543fc:
    // 0x3543fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3543fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_354400:
    // 0x354400: 0x40f809  jalr        $v0
label_354404:
    if (ctx->pc == 0x354404u) {
        ctx->pc = 0x354404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354400u;
        // 0x354404: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354408u;
        goto label_354408;
    }
    ctx->pc = 0x354400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x354408u);
        ctx->pc = 0x354404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354400u;
        // 0x354404: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354400u, 0x354408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354408u;
label_354408:
    // 0x354408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x354408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35440c:
    // 0x35440c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35440cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_354410:
    // 0x354410: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x354410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_354414:
    // 0x354414: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x354414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_354418:
    // 0x354418: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x354418u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35441c:
    // 0x35441c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x35441cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_354420:
    // 0x354420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x354420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_354424:
    // 0x354424: 0x3e00008  jr          $ra
label_354428:
    if (ctx->pc == 0x354428u) {
        ctx->pc = 0x354428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354424u;
        // 0x354428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35442Cu;
        goto label_35442c;
    }
    ctx->pc = 0x354424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354424u;
        // 0x354428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35442Cu;
label_35442c:
    // 0x35442c: 0x0  nop
    ctx->pc = 0x35442cu;
    // NOP
    ctx->pc = 0x354430u;
}
