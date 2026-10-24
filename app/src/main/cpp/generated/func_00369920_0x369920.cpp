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

// Function: func_00369920
// Address: 0x369920 - 0x369e60
void func_00369920_0x369920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369920_0x369920");
#endif

    switch (ctx->pc) {
        case 0x369bd8u: goto label_369bd8;
        case 0x369d70u: goto label_369d70;
        case 0x369da8u: goto label_369da8;
        case 0x369dacu: goto label_369dac;
        case 0x369db4u: goto label_369db4;
        case 0x369dc8u: goto label_369dc8;
        default: break;
    }

    ctx->pc = 0x369920u;

    // 0x369920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x369920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x369924: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x369924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x369928: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36992c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36992cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369930: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369934: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x369934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36993c: 0x2224024  and         $t0, $s1, $v0
    ctx->pc = 0x36993cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x369940: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x369940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x369944: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x369944u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x369948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36994c: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x36994cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x369950: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x369950u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369954: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369958: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36995c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36995cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369960: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x369960u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369964: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369968: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x369968u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36996c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36996cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369970: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369970u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369974: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369978: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36997c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36997cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369980: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x369980u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x369984: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369984u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369988: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x369988u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x36998c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36998cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369990: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369994: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x369994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x369998: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x36999c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36999cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3699a0: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x3699a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x3699a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3699a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3699a8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3699a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3699ac: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x3699acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3699b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3699b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3699b4: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x3699b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x3699b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3699b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3699bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3699bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3699c0: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3699C0u;
    {
        const bool branch_taken_0x3699c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3699C0u;
        // 0x3699c4: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3699c0) {
            ctx->pc = 0x3699E0u;
            goto label_3699e0;
        }
    }
    ctx->pc = 0x3699C8u;
    // 0x3699c8: 0x91023  negu        $v0, $t1
    ctx->pc = 0x3699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3699cc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3699ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3699d0: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x3699d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3699d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3699D4u;
    {
        const bool branch_taken_0x3699d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3699D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3699D4u;
        // 0x3699d8: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3699d4) {
            ctx->pc = 0x3699E8u;
            goto label_3699e8;
        }
    }
    ctx->pc = 0x3699DCu;
    // 0x3699dc: 0x0  nop
    ctx->pc = 0x3699dcu;
    // NOP
label_3699e0:
    // 0x3699e0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3699e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699e4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3699e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3699e8:
    // 0x3699e8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3699e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3699ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3699ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3699f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3699f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3699f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3699f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3699f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3699f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3699fc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3699fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369a00: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369a04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369a08: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369a08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369a0c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369a10: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369a14: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x369a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x369a18: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369a18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369a1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369a20: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369a24: 0x14a40106  bne         $a1, $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x369A24u;
    {
        const bool branch_taken_0x369a24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x369A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A24u;
        // 0x369a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a24) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369A2Cu;
    // 0x369a2c: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x369a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x369a30: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x369A30u;
    {
        const bool branch_taken_0x369a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369a30) {
            ctx->pc = 0x369A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369A30u;
            // 0x369a34: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369A88u;
            goto label_369a88;
        }
    }
    ctx->pc = 0x369A38u;
    // 0x369a38: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x369a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x369a3c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x369a3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a40: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x369a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x369a44: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369a44u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369a48: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x369a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x369a4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369a50: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x369a50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x369a54: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369a58: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369a58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369a5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369a60: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369a64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369a68: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369a68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369a6c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369a70: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369a70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369a74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369a78: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369a7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369a80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x369A80u;
    {
        const bool branch_taken_0x369a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A80u;
        // 0x369a84: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a80) {
            ctx->pc = 0x369A8Cu;
            goto label_369a8c;
        }
    }
    ctx->pc = 0x369A88u;
label_369a88:
    // 0x369a88: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x369a88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_369a8c:
    // 0x369a8c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x369a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x369a90: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x369A90u;
    {
        const bool branch_taken_0x369a90 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x369A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A90u;
        // 0x369a94: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a90) {
            ctx->pc = 0x369AE0u;
            goto label_369ae0;
        }
    }
    ctx->pc = 0x369A98u;
    // 0x369a98: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x369a98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a9c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369a9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369aa0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x369aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369aa8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369aac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369ab0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369ab4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369ab8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369abc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369ac0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369ac4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369ac8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369acc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369ad0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369AD4u;
    {
        const bool branch_taken_0x369ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AD4u;
        // 0x369ad8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ad4) {
            ctx->pc = 0x369AE8u;
            goto label_369ae8;
        }
    }
    ctx->pc = 0x369ADCu;
    // 0x369adc: 0x0  nop
    ctx->pc = 0x369adcu;
    // NOP
label_369ae0:
    // 0x369ae0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x369ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x369ae4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x369ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_369ae8:
    // 0x369ae8: 0x14a000d5  bnez        $a1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x369AE8u;
    {
        const bool branch_taken_0x369ae8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x369AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AE8u;
        // 0x369aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ae8) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369AF0u;
    // 0x369af0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x369af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x369af4: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x369AF4u;
    {
        const bool branch_taken_0x369af4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x369AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AF4u;
        // 0x369af8: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369af4) {
            ctx->pc = 0x369B40u;
            goto label_369b40;
        }
    }
    ctx->pc = 0x369AFCu;
    // 0x369afc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x369afcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b00: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369b00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369b04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x369b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b0c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369b10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369b14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369b14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369b18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369b1c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369b1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369b20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369b24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369b24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369b28: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369b2c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369b2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369b30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369b34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369b34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x369B38u;
    {
        const bool branch_taken_0x369b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B38u;
        // 0x369b3c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b38) {
            ctx->pc = 0x369B48u;
            goto label_369b48;
        }
    }
    ctx->pc = 0x369B40u;
label_369b40:
    // 0x369b40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x369b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x369b44: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x369b44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_369b48:
    // 0x369b48: 0x10a000bd  beqz        $a1, . + 4 + (0xBD << 2)
    ctx->pc = 0x369B48u;
    {
        const bool branch_taken_0x369b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x369B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B48u;
        // 0x369b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b48) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369B50u;
    // 0x369b50: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x369b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x369b54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369B54u;
    {
        const bool branch_taken_0x369b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B54u;
        // 0x369b58: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b54) {
            ctx->pc = 0x369B6Cu;
            goto label_369b6c;
        }
    }
    ctx->pc = 0x369B5Cu;
    // 0x369b5c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x369b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x369b60: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x369b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x369b64: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x369b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369b68: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x369b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_369b6c:
    // 0x369b6c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x369b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x369b70: 0x14a300b3  bne         $a1, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x369B70u;
    {
        const bool branch_taken_0x369b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x369B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B70u;
        // 0x369b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b70) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369B78u;
    // 0x369b78: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x369b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x369b7c: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x369b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x369b80: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x369B80u;
    {
        const bool branch_taken_0x369b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369b80) {
            ctx->pc = 0x369B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369B80u;
            // 0x369b84: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369BC8u;
            goto label_369bc8;
        }
    }
    ctx->pc = 0x369B88u;
    // 0x369b88: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x369b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x369b8c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x369b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x369b90: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369b90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369b94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369b98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369b9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369ba0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369ba4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369ba8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369ba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369bac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369bb0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369bb4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369bb8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369bb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369bbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369bc0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369bc4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_369bc8:
    // 0x369bc8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x369bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x369bcc: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x369bccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x369bd0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x369bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x369bd4: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x369bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_369bd8:
    // 0x369bd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369BD8u;
    {
        const bool branch_taken_0x369bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BD8u;
        // 0x369bdc: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369bd8) {
            ctx->pc = 0x369BECu;
            goto label_369bec;
        }
    }
    ctx->pc = 0x369BE0u;
    // 0x369be0: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x369be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x369be4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x369be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369be8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x369be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_369bec:
    // 0x369bec: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x369BECu;
    {
        const bool branch_taken_0x369bec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x369BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BECu;
        // 0x369bf0: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369bec) {
            ctx->pc = 0x369C58u;
            goto label_369c58;
        }
    }
    ctx->pc = 0x369BF4u;
    // 0x369bf4: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x369bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x369bf8: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x369bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x369bfc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x369BFCu;
    {
        const bool branch_taken_0x369bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369bfc) {
            ctx->pc = 0x369C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369BFCu;
            // 0x369c00: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369C44u;
            goto label_369c44;
        }
    }
    ctx->pc = 0x369C04u;
    // 0x369c04: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x369c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x369c08: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x369c08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x369c0c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369c0cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369c10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369c14: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369c18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369c1c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369c20: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369c24: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369c24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369c28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369c2c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369c30: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369c34: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369c38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369c3c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369c40: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369c40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_369c44:
    // 0x369c44: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x369c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x369c48: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x369c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x369c4c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x369C4Cu;
    {
        const bool branch_taken_0x369c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C4Cu;
        // 0x369c50: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c4c) {
            ctx->pc = 0x369BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369bd8;
        }
    }
    ctx->pc = 0x369C54u;
    // 0x369c54: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x369c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_369c58:
    // 0x369c58: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x369c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x369c5c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x369C5Cu;
    {
        const bool branch_taken_0x369c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C5Cu;
        // 0x369c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c5c) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369C64u;
    // 0x369c64: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x369c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x369c68: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x369c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x369c6c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x369c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x369c70: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x369c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x369c74: 0x84c6a378  lh          $a2, -0x5C88($a2)
    ctx->pc = 0x369c74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294943608)));
    // 0x369c78: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x369c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x369c7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x369c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369c80: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x369c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x369c84: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x369C84u;
    {
        const bool branch_taken_0x369c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C84u;
        // 0x369c88: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c84) {
            ctx->pc = 0x369CF0u;
            goto label_369cf0;
        }
    }
    ctx->pc = 0x369C8Cu;
    // 0x369c8c: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x369c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x369c90: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x369c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x369c94: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x369C94u;
    {
        const bool branch_taken_0x369c94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c94) {
            ctx->pc = 0x369C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369C94u;
            // 0x369c98: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369CB0u;
            goto label_369cb0;
        }
    }
    ctx->pc = 0x369C9Cu;
    // 0x369c9c: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x369c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x369ca0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x369ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369ca4: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x369ca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x369ca8: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x369ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x369cac: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x369cacu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_369cb0:
    // 0x369cb0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x369cb0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369cb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369cb8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369cbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369cc0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369cc4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x369cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369cc8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x369cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x369ccc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369cd0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369cd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x369cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369cd8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x369cd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x369cdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x369cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x369ce0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x369ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x369ce4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369CE4u;
    {
        const bool branch_taken_0x369ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CE4u;
        // 0x369ce8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ce4) {
            ctx->pc = 0x369CF8u;
            goto label_369cf8;
        }
    }
    ctx->pc = 0x369CECu;
    // 0x369cec: 0x0  nop
    ctx->pc = 0x369cecu;
    // NOP
label_369cf0:
    // 0x369cf0: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x369cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x369cf4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x369cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_369cf8:
    // 0x369cf8: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x369cf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x369cfc: 0x14a30050  bne         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x369CFCu;
    {
        const bool branch_taken_0x369cfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x369D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CFCu;
        // 0x369d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369cfc) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369D04u;
    // 0x369d04: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x369d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x369d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369D08u;
    {
        const bool branch_taken_0x369d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D08u;
        // 0x369d0c: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d08) {
            ctx->pc = 0x369D20u;
            goto label_369d20;
        }
    }
    ctx->pc = 0x369D10u;
    // 0x369d10: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x369d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x369d14: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x369d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x369d18: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x369d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x369d1c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x369d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_369d20:
    // 0x369d20: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x369d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x369d24: 0x14a30046  bne         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x369D24u;
    {
        const bool branch_taken_0x369d24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x369D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D24u;
        // 0x369d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d24) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369D2Cu;
    // 0x369d2c: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x369d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x369d30: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x369d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x369d34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369D34u;
    {
        const bool branch_taken_0x369d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D34u;
        // 0x369d38: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d34) {
            ctx->pc = 0x369D48u;
            goto label_369d48;
        }
    }
    ctx->pc = 0x369D3Cu;
    // 0x369d3c: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x369d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x369d40: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x369d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x369d44: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x369d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_369d48:
    // 0x369d48: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x369d48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x369d4c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x369d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x369d50: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x369d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x369d54: 0x912823  subu        $a1, $a0, $s1
    ctx->pc = 0x369d54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x369d58: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x369d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x369d5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x369D5Cu;
    {
        const bool branch_taken_0x369d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D5Cu;
        // 0x369d60: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d5c) {
            ctx->pc = 0x369DA8u;
            goto label_369da8;
        }
    }
    ctx->pc = 0x369D64u;
    // 0x369d64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x369D64u;
    {
        const bool branch_taken_0x369d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D64u;
        // 0x369d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d64) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369D6Cu;
    // 0x369d6c: 0x0  nop
    ctx->pc = 0x369d6cu;
    // NOP
label_369d70:
    // 0x369d70: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x369d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x369d74: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x369D74u;
    {
        const bool branch_taken_0x369d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D74u;
        // 0x369d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d74) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369D7Cu;
    // 0x369d7c: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x369d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x369d80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x369d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x369d84: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x369D84u;
    {
        const bool branch_taken_0x369d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D84u;
        // 0x369d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d84) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369D8Cu;
    // 0x369d8c: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x369d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x369d90: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x369d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x369d94: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x369d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x369d98: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x369D98u;
    {
        const bool branch_taken_0x369d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d98) {
            ctx->pc = 0x369D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369D98u;
            // 0x369d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369DA0u;
    // 0x369da0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x369DA0u;
    {
        const bool branch_taken_0x369da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DA0u;
        // 0x369da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369da0) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369DA8u;
label_369da8:
    // 0x369da8: 0x2452823  subu        $a1, $s2, $a1
    ctx->pc = 0x369da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_369dac:
    // 0x369dac: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x369DACu;
    SET_GPR_U32(ctx, 31, 0x369DB4u);
    ctx->pc = 0x369DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DACu;
    // 0x369db0: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x369DACu, 0x369DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DB4u;
label_369db4:
    // 0x369db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x369db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369db8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x369DB8u;
    {
        const bool branch_taken_0x369db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x369DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DB8u;
        // 0x369dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369db8) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369DC0u;
    // 0x369dc0: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x369DC0u;
    SET_GPR_U32(ctx, 31, 0x369DC8u);
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x369DC0u, 0x369DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DC8u;
label_369dc8:
    // 0x369dc8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x369dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x369dcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x369dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369dd0: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x369dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x369dd4: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x369dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x369dd8: 0x30c80040  andi        $t0, $a2, 0x40
    ctx->pc = 0x369dd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x369ddc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x369ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369de0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x369DE0u;
    {
        const bool branch_taken_0x369de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DE0u;
        // 0x369de4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369de0) {
            ctx->pc = 0x369E10u;
            goto label_369e10;
        }
    }
    ctx->pc = 0x369DE8u;
    // 0x369de8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x369de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x369dec: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x369decu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x369df0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x369df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x369df4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x369df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x369df8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x369df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x369dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x369dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x369e00: 0x1453000f  bne         $v0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x369E00u;
    {
        const bool branch_taken_0x369e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x369E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E00u;
        // 0x369e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e00) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369E08u;
    // 0x369e08: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x369E08u;
    {
        const bool branch_taken_0x369e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E08u;
        // 0x369e0c: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e08) {
            ctx->pc = 0x369DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369dac;
        }
    }
    ctx->pc = 0x369E10u;
label_369e10:
    // 0x369e10: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369E10u;
    {
        const bool branch_taken_0x369e10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E10u;
        // 0x369e14: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e10) {
            ctx->pc = 0x369E20u;
            goto label_369e20;
        }
    }
    ctx->pc = 0x369E18u;
    // 0x369e18: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x369E18u;
    {
        const bool branch_taken_0x369e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E18u;
        // 0x369e1c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e18) {
            ctx->pc = 0x369DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369da8;
        }
    }
    ctx->pc = 0x369E20u;
label_369e20:
    // 0x369e20: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x369e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x369e24: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x369E24u;
    {
        const bool branch_taken_0x369e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E24u;
        // 0x369e28: 0x2112023  subu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e24) {
            ctx->pc = 0x369D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369d70;
        }
    }
    ctx->pc = 0x369E2Cu;
    // 0x369e2c: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x369e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x369e30: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x369e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x369e34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x369E34u;
    {
        const bool branch_taken_0x369e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E34u;
        // 0x369e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e34) {
            ctx->pc = 0x369E40u;
            goto label_369e40;
        }
    }
    ctx->pc = 0x369E3Cu;
    // 0x369e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x369e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_369e40:
    // 0x369e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369e44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369e48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369e4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x369e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x369e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369e54: 0x3e00008  jr          $ra
    ctx->pc = 0x369E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E54u;
        // 0x369e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369E5Cu;
    // 0x369e5c: 0x0  nop
    ctx->pc = 0x369e5cu;
    // NOP
    ctx->pc = 0x369e60u;
}
