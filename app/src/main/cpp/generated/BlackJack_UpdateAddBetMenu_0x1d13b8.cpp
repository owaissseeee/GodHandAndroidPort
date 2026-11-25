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

// Function: BlackJack_UpdateAddBetMenu
// Address: 0x1d13b8 - 0x1d1770
void BlackJack_UpdateAddBetMenu_0x1d13b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateAddBetMenu_0x1d13b8");
#endif

    if (__builtin_expect(ctx->pc != 0x1d13b8u, 0)) {
        switch (ctx->pc) {
            case 0x1d13f4u: goto label_1d13f4;
            case 0x1d1400u: goto label_1d1400;
            case 0x1d1478u: goto label_1d1478;
            case 0x1d14b0u: goto label_1d14b0;
            case 0x1d14bcu: goto label_1d14bc;
            case 0x1d14e0u: goto label_1d14e0;
            case 0x1d1510u: goto label_1d1510;
            case 0x1d151cu: goto label_1d151c;
            case 0x1d1540u: goto label_1d1540;
            case 0x1d1580u: goto label_1d1580;
            case 0x1d158cu: goto label_1d158c;
            case 0x1d15b0u: goto label_1d15b0;
            case 0x1d15f4u: goto label_1d15f4;
            case 0x1d160cu: goto label_1d160c;
            case 0x1d1624u: goto label_1d1624;
            case 0x1d1630u: goto label_1d1630;
            case 0x1d1650u: goto label_1d1650;
            case 0x1d165cu: goto label_1d165c;
            case 0x1d1668u: goto label_1d1668;
            case 0x1d16a8u: goto label_1d16a8;
            case 0x1d16d8u: goto label_1d16d8;
            case 0x1d16f0u: goto label_1d16f0;
            case 0x1d1708u: goto label_1d1708;
            case 0x1d171cu: goto label_1d171c;
            case 0x1d1728u: goto label_1d1728;
            case 0x1d1758u: goto label_1d1758;
            default: break;
        }
    }


    // 0x1d13b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d13bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d13c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d13c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d13c4: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d13c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d13cc: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d13d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D13D0u;
    {
        const bool branch_taken_0x1d13d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13D0u;
        // 0x1d13d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d0) {
            ctx->pc = 0x1D13E8u;
            goto label_1d13e8;
        }
    }
    // 0x1d13d8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D13D8u;
    {
        const bool branch_taken_0x1d13d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13D8u;
        // 0x1d13dc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d8) {
            ctx->pc = 0x1D1410u;
            goto label_1d1410;
        }
    }
    // 0x1d13e0: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1D13E0u;
    {
        const bool branch_taken_0x1d13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13E0u;
        // 0x1d13e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13e0) {
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    ctx->pc = 0x1D13E8u;
label_1d13e8:
    // 0x1d13e8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13ec: 0xc0754d8  jal         func_1D5360
    SET_GPR_U32(ctx, 31, 0x1D13F4u);
    ctx->pc = 0x1D13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13ECu;
    // 0x1d13f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5360_0x1d5360, 0x1d5360u, 0x1d13f4u)) {
        return;
    }
    ctx->pc = 0x1D13F4u;
label_1d13f4:
    // 0x1d13f4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13f8: 0xc0755e8  jal         func_1D57A0
    SET_GPR_U32(ctx, 31, 0x1D1400u);
    ctx->pc = 0x1D13FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13F8u;
    // 0x1d13fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField5B4_1D57A0_0x1d57a0, 0x1d57a0u, 0x1d1400u)) {
        return;
    }
    ctx->pc = 0x1D1400u;
label_1d1400:
    // 0x1d1400: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d1404: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1408: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d140c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d1410:
    // 0x1d1410: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x1d1414: 0x30420200  andi        $v0, $v0, 0x200
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d1418: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1418u;
    {
        const bool branch_taken_0x1d1418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1418u;
        // 0x1d141c: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1418) {
            ctx->pc = 0x1D145Cu;
            goto label_1d145c;
        }
    }
    // 0x1d1420: 0xdc82fc14  ld          $v0, -0x3EC($a0)
    ctx->pc = 0x1d1420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294966292)));
    // 0x1d1424: 0x34038000  ori         $v1, $zero, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d1428: 0x31f38  dsll        $v1, $v1, 28
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1d142c: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d1430: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1430u;
    {
        const bool branch_taken_0x1d1430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1430u;
        // 0x1d1434: 0x9e021800  lwu         $v0, 0x1800($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1430) {
            ctx->pc = 0x1D1460u;
            goto label_1d1460;
        }
    }
    // 0x1d1438: 0x2107b  dsra        $v0, $v0, 1
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d143c: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d1440: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1440u;
    {
        const bool branch_taken_0x1d1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1440u;
        // 0x1d1444: 0x8e031800  lw          $v1, 0x1800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1440) {
            ctx->pc = 0x1D1454u;
            goto label_1d1454;
        }
    }
    // 0x1d1448: 0x2402fffd  addiu       $v0, $zero, -0x3
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d144c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D144Cu;
    {
        const bool branch_taken_0x1d144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D144Cu;
        // 0x1d1450: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d144c) {
            ctx->pc = 0x1D1458u;
            goto label_1d1458;
        }
    }
    ctx->pc = 0x1D1454u;
label_1d1454:
    // 0x1d1454: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1d1454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1d1458:
    // 0x1d1458: 0xae021800  sw          $v0, 0x1800($s0)
    ctx->pc = 0x1d1458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
label_1d145c:
    // 0x1d145c: 0x9e021800  lwu         $v0, 0x1800($s0)
    ctx->pc = 0x1d145cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6144)));
label_1d1460:
    // 0x1d1460: 0x2107b  dsra        $v0, $v0, 1
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d1464: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d1468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1468u;
    {
        const bool branch_taken_0x1d1468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1468u;
        // 0x1d146c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1468) {
            ctx->pc = 0x1D1480u;
            goto label_1d1480;
        }
    }
    // 0x1d1470: 0xc0752dc  jal         func_1D4B70
    SET_GPR_U32(ctx, 31, 0x1D1478u);
    ctx->pc = 0x1D1474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1470u;
    // 0x1d1474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &NoOp_1D4B70_0x1d4b70, 0x1d4b70u, 0x1d1478u)) {
        return;
    }
    ctx->pc = 0x1D1478u;
label_1d1478:
    // 0x1d1478: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1D1478u;
    {
        const bool branch_taken_0x1d1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1478u;
        // 0x1d147c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1478) {
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    ctx->pc = 0x1D1480u;
label_1d1480:
    // 0x1d1480: 0x34028800  ori         $v0, $zero, 0x8800
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d1484: 0x21678  dsll        $v0, $v0, 25
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1d1488: 0x34428000  ori         $v0, $v0, 0x8000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d148c: 0x212f8  dsll        $v0, $v0, 11
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1d1490: 0x246374a0  addiu       $v1, $v1, 0x74A0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d1494: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d1494u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d1498: 0x821024  and         $v0, $a0, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d149c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    // 0x1d14a4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14a8: 0xc0754d8  jal         func_1D5360
    SET_GPR_U32(ctx, 31, 0x1D14B0u);
    ctx->pc = 0x1D14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14A8u;
    // 0x1d14ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5360_0x1d5360, 0x1d5360u, 0x1d14b0u)) {
        return;
    }
    ctx->pc = 0x1D14B0u;
label_1d14b0:
    // 0x1d14b0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b4: 0xc0755e8  jal         func_1D57A0
    SET_GPR_U32(ctx, 31, 0x1D14BCu);
    ctx->pc = 0x1D14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14B4u;
    // 0x1d14b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField5B4_1D57A0_0x1d57a0, 0x1d57a0u, 0x1d14bcu)) {
        return;
    }
    ctx->pc = 0x1D14BCu;
label_1d14bc:
    // 0x1d14bc: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d14c0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d14c8: 0x2406015f  addiu       $a2, $zero, 0x15F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d14cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d14d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d14d4: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14d8: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D14E0u);
    ctx->pc = 0x1D14DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14D8u;
    // 0x1d14dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d14e0u)) {
        return;
    }
    ctx->pc = 0x1D14E0u;
label_1d14e0:
    // 0x1d14e0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1D14E0u;
    {
        const bool branch_taken_0x1d14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E0u;
        // 0x1d14e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14e0) {
            ctx->pc = 0x1D15B4u;
            goto label_1d15b4;
        }
    }
    ctx->pc = 0x1D14E8u;
label_1d14e8:
    // 0x1d14e8: 0x34028800  ori         $v0, $zero, 0x8800
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d14ec: 0x215f8  dsll        $v0, $v0, 23
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1d14f0: 0x34428000  ori         $v0, $v0, 0x8000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d14f4: 0x21338  dsll        $v0, $v0, 12
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d14f8: 0x821024  and         $v0, $a0, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d14fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D14FCu;
    {
        const bool branch_taken_0x1d14fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14fc) {
            ctx->pc = 0x1D155Cu;
            goto label_1d155c;
        }
    }
    // 0x1d1504: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1508: 0xc0754d8  jal         func_1D5360
    SET_GPR_U32(ctx, 31, 0x1D1510u);
    ctx->pc = 0x1D150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1508u;
    // 0x1d150c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5360_0x1d5360, 0x1d5360u, 0x1d1510u)) {
        return;
    }
    ctx->pc = 0x1D1510u;
label_1d1510:
    // 0x1d1510: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1514: 0xc0755e8  jal         func_1D57A0
    SET_GPR_U32(ctx, 31, 0x1D151Cu);
    ctx->pc = 0x1D1518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1514u;
    // 0x1d1518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField5B4_1D57A0_0x1d57a0, 0x1d57a0u, 0x1d151cu)) {
        return;
    }
    ctx->pc = 0x1D151Cu;
label_1d151c:
    // 0x1d151c: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1520: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1524: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1528: 0x2406015f  addiu       $a2, $zero, 0x15F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d152c: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1530: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1534: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1538: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D1540u);
    ctx->pc = 0x1D153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1538u;
    // 0x1d153c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d1540u)) {
        return;
    }
    ctx->pc = 0x1D1540u;
label_1d1540:
    // 0x1d1540: 0x8e031814  lw          $v1, 0x1814($s0)
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1544: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1544u;
    {
        const bool branch_taken_0x1d1544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1544u;
        // 0x1d1548: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1544) {
            ctx->pc = 0x1D1550u;
            goto label_1d1550;
        }
    }
    // 0x1d154c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1550:
    // 0x1d1550: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1554: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1D1554u;
    {
        const bool branch_taken_0x1d1554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1554u;
        // 0x1d1558: 0xae021804  sw          $v0, 0x1804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1554) {
            ctx->pc = 0x1D1758u;
            goto label_1d1758;
        }
    }
    ctx->pc = 0x1D155Cu;
label_1d155c:
    // 0x1d155c: 0x3402cc00  ori         $v0, $zero, 0xCC00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d1560: 0x21638  dsll        $v0, $v0, 24
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d1564: 0x3442c000  ori         $v0, $v0, 0xC000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d1568: 0x212b8  dsll        $v0, $v0, 10
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d156c: 0x821024  and         $v0, $a0, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d1570: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1570u;
    {
        const bool branch_taken_0x1d1570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1570u;
        // 0x1d1574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1570) {
            ctx->pc = 0x1D15C0u;
            goto label_1d15c0;
        }
    }
    // 0x1d1578: 0xc0754d8  jal         func_1D5360
    SET_GPR_U32(ctx, 31, 0x1D1580u);
    ctx->pc = 0x1D157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1578u;
    // 0x1d157c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5360_0x1d5360, 0x1d5360u, 0x1d1580u)) {
        return;
    }
    ctx->pc = 0x1D1580u;
label_1d1580:
    // 0x1d1580: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1584: 0xc0755e8  jal         func_1D57A0
    SET_GPR_U32(ctx, 31, 0x1D158Cu);
    ctx->pc = 0x1D1588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1584u;
    // 0x1d1588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField5B4_1D57A0_0x1d57a0, 0x1d57a0u, 0x1d158cu)) {
        return;
    }
    ctx->pc = 0x1D158Cu;
label_1d158c:
    // 0x1d158c: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1590: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1594: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1598: 0x2406015f  addiu       $a2, $zero, 0x15F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d159c: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d15a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d15a4: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15a8: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D15B0u);
    ctx->pc = 0x1D15ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15A8u;
    // 0x1d15ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d15b0u)) {
        return;
    }
    ctx->pc = 0x1D15B0u;
label_1d15b0:
    // 0x1d15b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d15b4:
    // 0x1d15b4: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d15b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d15b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1D15B8u;
    {
        const bool branch_taken_0x1d15b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15B8u;
        // 0x1d15bc: 0xae031804  sw          $v1, 0x1804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15b8) {
            ctx->pc = 0x1D1758u;
            goto label_1d1758;
        }
    }
    ctx->pc = 0x1D15C0u;
label_1d15c0:
    // 0x1d15c0: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d15c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d15c4: 0x3c021000  lui         $v0, 0x1000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d15c8: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d15cc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D15CCu;
    {
        const bool branch_taken_0x1d15cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15CCu;
        // 0x1d15d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15cc) {
            ctx->pc = 0x1D16B0u;
            goto label_1d16b0;
        }
    }
    // 0x1d15d4: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d15d8: 0x8e031810  lw          $v1, 0x1810($s0)
    ctx->pc = 0x1d15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6160)));
    // 0x1d15dc: 0x43102a  slt         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d15e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D15E0u;
    {
        const bool branch_taken_0x1d15e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15E0u;
        // 0x1d15e4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15e0) {
            ctx->pc = 0x1D1684u;
            goto label_1d1684;
        }
    }
    // 0x1d15e8: 0x24519b70  addiu       $s1, $v0, -0x6490
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1d15ec: 0xc07e9c4  jal         func_1FA710
    SET_GPR_U32(ctx, 31, 0x1D15F4u);
    ctx->pc = 0x1D15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15ECu;
    // 0x1d15f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getGold_0x1fa710, 0x1fa710u, 0x1d15f4u)) {
        return;
    }
    ctx->pc = 0x1D15F4u;
label_1d15f4:
    // 0x1d15f4: 0x28420064  slti        $v0, $v0, 0x64
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1d15f8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D15F8u;
    {
        const bool branch_taken_0x1d15f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F8u;
        // 0x1d15fc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15f8) {
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    // 0x1d1600: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1604: 0xc07ea1c  jal         func_1FA870
    SET_GPR_U32(ctx, 31, 0x1D160Cu);
    ctx->pc = 0x1D1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1604u;
    // 0x1d1608: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_subGold_0x1fa870, 0x1fa870u, 0x1d160cu)) {
        return;
    }
    ctx->pc = 0x1D160Cu;
label_1d160c:
    // 0x1d160c: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1610: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1614: 0x24420064  addiu       $v0, $v0, 0x64
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1d1618: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d161c: 0xc0755d8  jal         func_1D5760
    SET_GPR_U32(ctx, 31, 0x1D1624u);
    ctx->pc = 0x1D1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D161Cu;
    // 0x1d1620: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetNumber_1D5760_0x1d5760, 0x1d5760u, 0x1d1624u)) {
        return;
    }
    ctx->pc = 0x1D1624u;
label_1d1624:
    // 0x1d1624: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1628: 0xc075540  jal         func_1D5500
    SET_GPR_U32(ctx, 31, 0x1D1630u);
    ctx->pc = 0x1D162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1628u;
    // 0x1d162c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5500_0x1d5500, 0x1d5500u, 0x1d1630u)) {
        return;
    }
    ctx->pc = 0x1D1630u;
label_1d1630:
    // 0x1d1630: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1634: 0x8e031810  lw          $v1, 0x1810($s0)
    ctx->pc = 0x1d1634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6160)));
    // 0x1d1638: 0x43102a  slt         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d163c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D163Cu;
    {
        const bool branch_taken_0x1d163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d163c) {
            ctx->pc = 0x1D1640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D163Cu;
            // 0x1d1640: 0x8e021800  lw          $v0, 0x1800($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1678u;
            goto label_1d1678;
        }
    }
    // 0x1d1644: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1648: 0xc0754d8  jal         func_1D5360
    SET_GPR_U32(ctx, 31, 0x1D1650u);
    ctx->pc = 0x1D164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1648u;
    // 0x1d164c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5360_0x1d5360, 0x1d5360u, 0x1d1650u)) {
        return;
    }
    ctx->pc = 0x1D1650u;
label_1d1650:
    // 0x1d1650: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1654: 0xc0755e8  jal         func_1D57A0
    SET_GPR_U32(ctx, 31, 0x1D165Cu);
    ctx->pc = 0x1D1658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1654u;
    // 0x1d1658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField5B4_1D57A0_0x1d57a0, 0x1d57a0u, 0x1d165cu)) {
        return;
    }
    ctx->pc = 0x1D165Cu;
label_1d165c:
    // 0x1d165c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1660: 0xc07550c  jal         func_1D5430
    SET_GPR_U32(ctx, 31, 0x1D1668u);
    ctx->pc = 0x1D1664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1660u;
    // 0x1d1664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5430_0x1d5430, 0x1d5430u, 0x1d1668u)) {
        return;
    }
    ctx->pc = 0x1D1668u;
label_1d1668:
    // 0x1d1668: 0x24020003  addiu       $v0, $zero, 0x3
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d166c: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1670: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d1674: 0x8e021800  lw          $v0, 0x1800($s0)
    ctx->pc = 0x1d1674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
label_1d1678:
    // 0x1d1678: 0x2403fff7  addiu       $v1, $zero, -0x9
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1d167c: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d1680: 0xae021800  sw          $v0, 0x1800($s0)
    ctx->pc = 0x1d1680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
label_1d1684:
    // 0x1d1684: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d1688:
    // 0x1d1688: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d168c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1690: 0x2406015e  addiu       $a2, $zero, 0x15E
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d1694: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1698: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d169c: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16a0: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D16A8u);
    ctx->pc = 0x1D16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16A0u;
    // 0x1d16a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d16a8u)) {
        return;
    }
    ctx->pc = 0x1D16A8u;
label_1d16a8:
    // 0x1d16a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D16A8u;
    {
        const bool branch_taken_0x1d16a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16A8u;
        // 0x1d16ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16a8) {
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    ctx->pc = 0x1D16B0u;
label_1d16b0:
    // 0x1d16b0: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d16b4: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D16B4u;
    {
        const bool branch_taken_0x1d16b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16b4) {
            ctx->pc = 0x1D16B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D16B4u;
            // 0x1d16b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    // 0x1d16bc: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d16c0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D16C0u;
    {
        const bool branch_taken_0x1d16c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16C0u;
        // 0x1d16c4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16c0) {
            ctx->pc = 0x1D1710u;
            goto label_1d1710;
        }
    }
    // 0x1d16c8: 0x24050064  addiu       $a1, $zero, 0x64
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d16cc: 0x24849b70  addiu       $a0, $a0, -0x6490
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d16d0: 0xc07e9d4  jal         func_1FA750
    SET_GPR_U32(ctx, 31, 0x1D16D8u);
    ctx->pc = 0x1D16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16D0u;
    // 0x1d16d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_addGold_0x1fa750, 0x1fa750u, 0x1d16d8u)) {
        return;
    }
    ctx->pc = 0x1D16D8u;
label_1d16d8:
    // 0x1d16d8: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d16dc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16e0: 0x2442ff9c  addiu       $v0, $v0, -0x64
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d16e4: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16e8: 0xc0755d8  jal         func_1D5760
    SET_GPR_U32(ctx, 31, 0x1D16F0u);
    ctx->pc = 0x1D16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16E8u;
    // 0x1d16ec: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetNumber_1D5760_0x1d5760, 0x1d5760u, 0x1d16f0u)) {
        return;
    }
    ctx->pc = 0x1D16F0u;
label_1d16f0:
    // 0x1d16f0: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d16f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D16F4u;
    {
        const bool branch_taken_0x1d16f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16F4u;
        // 0x1d16f8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16f4) {
            ctx->pc = 0x1D1738u;
            goto label_1d1738;
        }
    }
    // 0x1d16fc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1700: 0xc075540  jal         func_1D5500
    SET_GPR_U32(ctx, 31, 0x1D1708u);
    ctx->pc = 0x1D1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1700u;
    // 0x1d1704: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5500_0x1d5500, 0x1d5500u, 0x1d1708u)) {
        return;
    }
    ctx->pc = 0x1D1708u;
label_1d1708:
    // 0x1d1708: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1708u;
    {
        const bool branch_taken_0x1d1708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1708u;
        // 0x1d170c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1708) {
            ctx->pc = 0x1D1738u;
            goto label_1d1738;
        }
    }
    ctx->pc = 0x1D1710u;
label_1d1710:
    // 0x1d1710: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1714: 0xc0754d8  jal         func_1D5360
    SET_GPR_U32(ctx, 31, 0x1D171Cu);
    ctx->pc = 0x1D1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1714u;
    // 0x1d1718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D5360_0x1d5360, 0x1d5360u, 0x1d171cu)) {
        return;
    }
    ctx->pc = 0x1D171Cu;
label_1d171c:
    // 0x1d171c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1720: 0xc0755e8  jal         func_1D57A0
    SET_GPR_U32(ctx, 31, 0x1D1728u);
    ctx->pc = 0x1D1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1720u;
    // 0x1d1724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField5B4_1D57A0_0x1d57a0, 0x1d57a0u, 0x1d1728u)) {
        return;
    }
    ctx->pc = 0x1D1728u;
label_1d1728:
    // 0x1d1728: 0x24020004  addiu       $v0, $zero, 0x4
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d172c: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d172cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1730: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d1734: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d1738:
    // 0x1d1738: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d173c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1740: 0x24060161  addiu       $a2, $zero, 0x161
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d1744: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1748: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d174c: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1750: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D1758u);
    ctx->pc = 0x1D1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1750u;
    // 0x1d1754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d1758u)) {
        return;
    }
    ctx->pc = 0x1D1758u;
label_1d1758:
    // 0x1d1758: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d1758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d175c:
    // 0x1d175c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d175cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1764: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1764u;
        // 0x1d1768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1d176c: 0x0  nop
    // NOP
    ctx->pc = 0x1d1770u;
}