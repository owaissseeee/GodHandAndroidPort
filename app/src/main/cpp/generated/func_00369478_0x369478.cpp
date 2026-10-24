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

// Function: func_00369478
// Address: 0x369478 - 0x369920
void func_00369478_0x369478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369478_0x369478");
#endif

    switch (ctx->pc) {
        case 0x369750u: goto label_369750;
        default: break;
    }

    ctx->pc = 0x369478u;

    // 0x369478: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x369478u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36947c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x36947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x369480: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x369480u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x369484: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x369484u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369488: 0x1881023  subu        $v0, $t4, $t0
    ctx->pc = 0x369488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x36948c: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x36948cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369490: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369494: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x369494u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x369498: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36949c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36949cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694a0: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3694a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3694a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694a8: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x3694a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3694acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694b0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3694b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3694b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694b8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3694b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3694bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694c0: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x3694c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3694c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3694c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3694c8: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x3694c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x3694cc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3694ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3694d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3694d4: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x3694d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3694d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3694d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3694dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3694e0: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x3694e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x3694e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3694e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694e8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3694e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3694ec: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x3694ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3694f0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3694f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3694f4: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x3694f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x3694f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3694f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3694fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3694fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369500: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369500u;
    {
        const bool branch_taken_0x369500 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x369504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369500u;
        // 0x369504: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369500) {
            ctx->pc = 0x369520u;
            goto label_369520;
        }
    }
    ctx->pc = 0x369508u;
    // 0x369508: 0x91023  negu        $v0, $t1
    ctx->pc = 0x369508u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x36950c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369510: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x369510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x369514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369514u;
    {
        const bool branch_taken_0x369514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369514u;
        // 0x369518: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369514) {
            ctx->pc = 0x369528u;
            goto label_369528;
        }
    }
    ctx->pc = 0x36951Cu;
    // 0x36951c: 0x0  nop
    ctx->pc = 0x36951cu;
    // NOP
label_369520:
    // 0x369520: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x369520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369524: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x369524u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_369528:
    // 0x369528: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369528u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36952c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36952cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369530: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369534: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369538: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36953c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36953cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369540: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369544: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369548: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369548u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36954c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36954cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369550: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369554: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x369554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x369558: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369558u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36955c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36955cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369560: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369564: 0x14a400eb  bne         $a1, $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x369564u;
    {
        const bool branch_taken_0x369564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x369568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369564u;
        // 0x369568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369564) {
            ctx->pc = 0x369914u;
            goto label_369914;
        }
    }
    ctx->pc = 0x36956Cu;
    // 0x36956c: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x36956cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x369570: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x369570u;
    {
        const bool branch_taken_0x369570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369570) {
            ctx->pc = 0x369574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369570u;
            // 0x369574: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3695C8u;
            goto label_3695c8;
        }
    }
    ctx->pc = 0x369578u;
    // 0x369578: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x369578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x36957c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x36957cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369580: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x369580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x369584: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369584u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369588: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x369588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x36958c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36958cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369590: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x369590u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x369594: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369598: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369598u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36959c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36959cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3695a0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3695a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3695a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3695a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3695a8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3695a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3695ac: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3695acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3695b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3695b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3695b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3695b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3695b8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3695b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3695bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3695bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3695c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3695C0u;
    {
        const bool branch_taken_0x3695c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695C0u;
        // 0x3695c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3695c0) {
            ctx->pc = 0x3695CCu;
            goto label_3695cc;
        }
    }
    ctx->pc = 0x3695C8u;
label_3695c8:
    // 0x3695c8: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x3695c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_3695cc:
    // 0x3695cc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3695d0: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3695D0u;
    {
        const bool branch_taken_0x3695d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x3695D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695D0u;
        // 0x3695d4: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3695d0) {
            ctx->pc = 0x369620u;
            goto label_369620;
        }
    }
    ctx->pc = 0x3695D8u;
    // 0x3695d8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3695d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695dc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3695dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3695e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3695e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3695e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3695e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3695e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3695ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3695ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3695f0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3695f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3695f4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3695f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3695f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3695f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3695fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3695fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369600: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369600u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369604: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369608: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36960c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36960cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369610: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369610u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369614u;
    {
        const bool branch_taken_0x369614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369614u;
        // 0x369618: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369614) {
            ctx->pc = 0x369628u;
            goto label_369628;
        }
    }
    ctx->pc = 0x36961Cu;
    // 0x36961c: 0x0  nop
    ctx->pc = 0x36961cu;
    // NOP
label_369620:
    // 0x369620: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x369620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x369624: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x369624u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_369628:
    // 0x369628: 0x14a000ba  bnez        $a1, . + 4 + (0xBA << 2)
    ctx->pc = 0x369628u;
    {
        const bool branch_taken_0x369628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369628u;
        // 0x36962c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369628) {
            ctx->pc = 0x369914u;
            goto label_369914;
        }
    }
    ctx->pc = 0x369630u;
    // 0x369630: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x369630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x369634: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x369634u;
    {
        const bool branch_taken_0x369634 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x369638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369634u;
        // 0x369638: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369634) {
            ctx->pc = 0x369680u;
            goto label_369680;
        }
    }
    ctx->pc = 0x36963Cu;
    // 0x36963c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x36963cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369640: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369640u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369644: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369648: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x369648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36964c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36964cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369650: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369654: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369654u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369658: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36965c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36965cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369660: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369664: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369664u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369668: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36966c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36966cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369670: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369674: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x369678u;
    {
        const bool branch_taken_0x369678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369678u;
        // 0x36967c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369678) {
            ctx->pc = 0x369688u;
            goto label_369688;
        }
    }
    ctx->pc = 0x369680u;
label_369680:
    // 0x369680: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x369680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x369684: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x369684u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_369688:
    // 0x369688: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x369688u;
    {
        const bool branch_taken_0x369688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369688u;
        // 0x36968c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369688) {
            ctx->pc = 0x369914u;
            goto label_369914;
        }
    }
    ctx->pc = 0x369690u;
    // 0x369690: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x369690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x369694: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369694u;
    {
        const bool branch_taken_0x369694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369694u;
        // 0x369698: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369694) {
            ctx->pc = 0x3696ACu;
            goto label_3696ac;
        }
    }
    ctx->pc = 0x36969Cu;
    // 0x36969c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x36969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x3696a0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x3696a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3696a4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3696a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3696a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3696a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3696ac:
    // 0x3696ac: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3696acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3696b0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3696B0u;
    {
        const bool branch_taken_0x3696b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3696B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696B0u;
        // 0x3696b4: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696b0) {
            ctx->pc = 0x3696F0u;
            goto label_3696f0;
        }
    }
    ctx->pc = 0x3696B8u;
    // 0x3696b8: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3696B8u;
    {
        const bool branch_taken_0x3696b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3696b8) {
            ctx->pc = 0x3698F0u;
            goto label_3698f0;
        }
    }
    ctx->pc = 0x3696C0u;
    // 0x3696c0: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x3696c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x3696c4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3696C4u;
    {
        const bool branch_taken_0x3696c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3696c4) {
            ctx->pc = 0x3698F0u;
            goto label_3698f0;
        }
    }
    ctx->pc = 0x3696CCu;
    // 0x3696cc: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x3696ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x3696d0: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x3696D0u;
    {
        const bool branch_taken_0x3696d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3696D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696D0u;
        // 0x3696d4: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696d0) {
            ctx->pc = 0x3698F0u;
            goto label_3698f0;
        }
    }
    ctx->pc = 0x3696D8u;
    // 0x3696d8: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x3696d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3696dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3696DCu;
    {
        const bool branch_taken_0x3696dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3696dc) {
            ctx->pc = 0x3696E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3696DCu;
            // 0x3696e0: 0x2529ffe0  addiu       $t1, $t1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369704u;
            goto label_369704;
        }
    }
    ctx->pc = 0x3696E4u;
    // 0x3696e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3696E4u;
    {
        const bool branch_taken_0x3696e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3696E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696E4u;
        // 0x3696e8: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696e4) {
            ctx->pc = 0x369740u;
            goto label_369740;
        }
    }
    ctx->pc = 0x3696ECu;
    // 0x3696ec: 0x0  nop
    ctx->pc = 0x3696ecu;
    // NOP
label_3696f0:
    // 0x3696f0: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x3696f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x3696f4: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x3696f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3696f8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3696F8u;
    {
        const bool branch_taken_0x3696f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3696f8) {
            ctx->pc = 0x3696FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3696F8u;
            // 0x3696fc: 0xa5180  sll         $t2, $t2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369740u;
            goto label_369740;
        }
    }
    ctx->pc = 0x369700u;
    // 0x369700: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x369700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
label_369704:
    // 0x369704: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x369704u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x369708: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369708u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36970c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36970cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369710: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369714: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369718: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36971c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36971cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369720: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369724: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369728: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369728u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36972c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36972cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369730: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369734: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369738: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36973c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36973cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_369740:
    // 0x369740: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x369740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x369744: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x369744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x369748: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x369748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36974c: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x36974cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_369750:
    // 0x369750: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369750u;
    {
        const bool branch_taken_0x369750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369750u;
        // 0x369754: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369750) {
            ctx->pc = 0x369764u;
            goto label_369764;
        }
    }
    ctx->pc = 0x369758u;
    // 0x369758: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x369758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x36975c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369760: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x369760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_369764:
    // 0x369764: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x369764u;
    {
        const bool branch_taken_0x369764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x369768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369764u;
        // 0x369768: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369764) {
            ctx->pc = 0x3697D0u;
            goto label_3697d0;
        }
    }
    ctx->pc = 0x36976Cu;
    // 0x36976c: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x36976cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x369770: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x369770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x369774: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x369774u;
    {
        const bool branch_taken_0x369774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369774) {
            ctx->pc = 0x369778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369774u;
            // 0x369778: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3697BCu;
            goto label_3697bc;
        }
    }
    ctx->pc = 0x36977Cu;
    // 0x36977c: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x36977cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x369780: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x369780u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x369784: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369784u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369788: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x36978c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36978cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369790: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369794: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369798: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36979c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36979cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3697a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3697a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3697a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3697a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3697a8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3697a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3697ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3697acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3697b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3697b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3697b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3697b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3697b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3697b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3697bc:
    // 0x3697bc: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x3697bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x3697c0: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x3697c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x3697c4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3697C4u;
    {
        const bool branch_taken_0x3697c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3697C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697C4u;
        // 0x3697c8: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697c4) {
            ctx->pc = 0x369750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369750;
        }
    }
    ctx->pc = 0x3697CCu;
    // 0x3697cc: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x3697ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3697d0:
    // 0x3697d0: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x3697d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x3697d4: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3697D4u;
    {
        const bool branch_taken_0x3697d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3697D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697D4u;
        // 0x3697d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697d4) {
            ctx->pc = 0x369914u;
            goto label_369914;
        }
    }
    ctx->pc = 0x3697DCu;
    // 0x3697dc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3697dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3697e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3697e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3697e4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3697e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3697e8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3697e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3697ec: 0x84c6a378  lh          $a2, -0x5C88($a2)
    ctx->pc = 0x3697ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294943608)));
    // 0x3697f0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x3697f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3697f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3697f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3697f8: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x3697f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3697fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3697FCu;
    {
        const bool branch_taken_0x3697fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697FCu;
        // 0x369800: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697fc) {
            ctx->pc = 0x369868u;
            goto label_369868;
        }
    }
    ctx->pc = 0x369804u;
    // 0x369804: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x369804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x369808: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x369808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x36980c: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x36980Cu;
    {
        const bool branch_taken_0x36980c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x36980c) {
            ctx->pc = 0x369810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36980Cu;
            // 0x369810: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369828u;
            goto label_369828;
        }
    }
    ctx->pc = 0x369814u;
    // 0x369814: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x369814u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x369818: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x369818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36981c: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x36981cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x369820: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x369820u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x369824: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x369824u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_369828:
    // 0x369828: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369828u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36982c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36982cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369830: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369834: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369838: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369838u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36983c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36983cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369840: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369844: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369848: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369848u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36984c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36984cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369850: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369854: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369858: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369858u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36985c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36985Cu;
    {
        const bool branch_taken_0x36985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36985Cu;
        // 0x369860: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36985c) {
            ctx->pc = 0x369870u;
            goto label_369870;
        }
    }
    ctx->pc = 0x369864u;
    // 0x369864: 0x0  nop
    ctx->pc = 0x369864u;
    // NOP
label_369868:
    // 0x369868: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x369868u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x36986c: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x36986cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_369870:
    // 0x369870: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x369870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x369874: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x369874u;
    {
        const bool branch_taken_0x369874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x369878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369874u;
        // 0x369878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369874) {
            ctx->pc = 0x369914u;
            goto label_369914;
        }
    }
    ctx->pc = 0x36987Cu;
    // 0x36987c: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x36987cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x369880: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369880u;
    {
        const bool branch_taken_0x369880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369880u;
        // 0x369884: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369880) {
            ctx->pc = 0x369898u;
            goto label_369898;
        }
    }
    ctx->pc = 0x369888u;
    // 0x369888: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x369888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x36988c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x36988cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x369890: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x369890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369894: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x369894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_369898:
    // 0x369898: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x369898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36989c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36989Cu;
    {
        const bool branch_taken_0x36989c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3698A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36989Cu;
        // 0x3698a0: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36989c) {
            ctx->pc = 0x3698D0u;
            goto label_3698d0;
        }
    }
    ctx->pc = 0x3698A4u;
    // 0x3698a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3698A4u;
    {
        const bool branch_taken_0x3698a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3698a4) {
            ctx->pc = 0x3698F0u;
            goto label_3698f0;
        }
    }
    ctx->pc = 0x3698ACu;
    // 0x3698ac: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x3698acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x3698b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3698B0u;
    {
        const bool branch_taken_0x3698b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3698b0) {
            ctx->pc = 0x3698F0u;
            goto label_3698f0;
        }
    }
    ctx->pc = 0x3698B8u;
    // 0x3698b8: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x3698b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x3698bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3698BCu;
    {
        const bool branch_taken_0x3698bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3698C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698BCu;
        // 0x3698c0: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698bc) {
            ctx->pc = 0x3698F0u;
            goto label_3698f0;
        }
    }
    ctx->pc = 0x3698C4u;
    // 0x3698c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3698C4u;
    {
        const bool branch_taken_0x3698c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698C4u;
        // 0x3698c8: 0x29220020  slti        $v0, $t1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698c4) {
            ctx->pc = 0x3698D8u;
            goto label_3698d8;
        }
    }
    ctx->pc = 0x3698CCu;
    // 0x3698cc: 0x0  nop
    ctx->pc = 0x3698ccu;
    // NOP
label_3698d0:
    // 0x3698d0: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x3698d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x3698d4: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x3698d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
label_3698d8:
    // 0x3698d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3698D8u;
    {
        const bool branch_taken_0x3698d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3698d8) {
            ctx->pc = 0x3698DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3698D8u;
            // 0x3698dc: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3698FCu;
            goto label_3698fc;
        }
    }
    ctx->pc = 0x3698E0u;
    // 0x3698e0: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x3698e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x3698e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3698E4u;
    {
        const bool branch_taken_0x3698e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698E4u;
        // 0x3698e8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698e4) {
            ctx->pc = 0x3698F8u;
            goto label_3698f8;
        }
    }
    ctx->pc = 0x3698ECu;
    // 0x3698ec: 0x0  nop
    ctx->pc = 0x3698ecu;
    // NOP
label_3698f0:
    // 0x3698f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3698F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3698F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698F0u;
        // 0x3698f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3698F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3698F8u;
label_3698f8:
    // 0x3698f8: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x3698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_3698fc:
    // 0x3698fc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3698fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x369900: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x369900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x369904: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x369904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x369908: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x369908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x36990c: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x36990cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x369910: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x369910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_369914:
    // 0x369914: 0x3e00008  jr          $ra
    ctx->pc = 0x369914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36991Cu;
    // 0x36991c: 0x0  nop
    ctx->pc = 0x36991cu;
    // NOP
    ctx->pc = 0x369920u;
}
