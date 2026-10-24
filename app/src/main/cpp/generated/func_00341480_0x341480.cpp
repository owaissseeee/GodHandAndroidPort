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

// Function: func_00341480
// Address: 0x341480 - 0x341798
void func_00341480_0x341480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341480_0x341480");
#endif

    ctx->pc = 0x341480u;

    // 0x341480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341484: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x341484u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34148c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34148cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x341494: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x341494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341498: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x341498u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x34149c: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x34149cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3414a0: 0x91cb0003  lbu         $t3, 0x3($t6)
    ctx->pc = 0x3414a0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x3414a4: 0x358c732e  ori         $t4, $t4, 0x732E
    ctx->pc = 0x3414a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)29486);
    // 0x3414a8: 0x91c30002  lbu         $v1, 0x2($t6)
    ctx->pc = 0x3414a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x3414ac: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x3414acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3414b0: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x3414b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x3414b4: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x3414b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x3414b8: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x3414b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3414bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3414bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3414c0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3414c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3414c4: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x3414c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3414c8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x3414c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x3414cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3414ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3414d0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3414d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3414d4: 0x108c0005  beq         $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3414D4u;
    {
        const bool branch_taken_0x3414d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x3414D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414D4u;
        // 0x3414d8: 0x25cb0004  addiu       $t3, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414d4) {
            ctx->pc = 0x3414ECu;
            goto label_3414ec;
        }
    }
    ctx->pc = 0x3414DCu;
    // 0x3414dc: 0x3c03646e  lui         $v1, 0x646E
    ctx->pc = 0x3414dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25710 << 16));
    // 0x3414e0: 0x3463732e  ori         $v1, $v1, 0x732E
    ctx->pc = 0x3414e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29486);
    // 0x3414e4: 0x148300a8  bne         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3414E4u;
    {
        const bool branch_taken_0x3414e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3414E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414E4u;
        // 0x3414e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414e4) {
            ctx->pc = 0x341788u;
            goto label_341788;
        }
    }
    ctx->pc = 0x3414ECu;
label_3414ec:
    // 0x3414ec: 0x91660003  lbu         $a2, 0x3($t3)
    ctx->pc = 0x3414ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3414f0: 0x3c0f00ff  lui         $t7, 0xFF
    ctx->pc = 0x3414f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
    // 0x3414f4: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x3414f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3414f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3414f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3414fc: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x3414fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x341500: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x341500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x341504: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x341504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x341508: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x341508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x34150c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x34150cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x341510: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x341510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x341514: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x341514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x341518: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x341518u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34151c: 0xc3202  srl         $a2, $t4, 8
    ctx->pc = 0x34151cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x341520: 0xc2a00  sll         $a1, $t4, 8
    ctx->pc = 0x341520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x341524: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x341524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x341528: 0xc1e02  srl         $v1, $t4, 24
    ctx->pc = 0x341528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x34152c: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x34152cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x341530: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x341530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x341534: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x341534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x341538: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x341538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x34153c: 0x656025  or          $t4, $v1, $a1
    ctx->pc = 0x34153cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x341540: 0x32c202a  slt         $a0, $t9, $t4
    ctx->pc = 0x341540u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x341544: 0x14800090  bnez        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x341544u;
    {
        const bool branch_taken_0x341544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341544u;
        // 0x341548: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341544) {
            ctx->pc = 0x341788u;
            goto label_341788;
        }
    }
    ctx->pc = 0x34154Cu;
    // 0x34154c: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x34154cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x341550: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x341550u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341554: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x341554u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x341558: 0x91660002  lbu         $a2, 0x2($t3)
    ctx->pc = 0x341558u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x34155c: 0x91670001  lbu         $a3, 0x1($t3)
    ctx->pc = 0x34155cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x341560: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x341560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x341564: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x341564u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x341568: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x341568u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x34156c: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x34156cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x341570: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x341570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x341574: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x341574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x341578: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x341578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x34157c: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x34157cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x341580: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x341580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x341584: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x341584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x341588: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x341588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x34158c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x341590: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x341590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x341594: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x341594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x341598: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x341598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34159c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x34159cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3415a0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x3415a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3415a4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x3415a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x3415a8: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x3415a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x3415ac: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3415acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3415b0: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x3415b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3415b4: 0x93a02  srl         $a3, $t1, 8
    ctx->pc = 0x3415b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x3415b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3415b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3415bc: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x3415bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x3415c0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3415c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3415c4: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x3415c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x3415c8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3415c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3415cc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3415ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3415d0: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x3415d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x3415d4: 0x92600  sll         $a0, $t1, 24
    ctx->pc = 0x3415d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x3415d8: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3415d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x3415dc: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x3415dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x3415e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3415e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3415e4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3415e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3415e8: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x3415e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3415ec: 0x10990012  beq         $a0, $t9, . + 4 + (0x12 << 2)
    ctx->pc = 0x3415ECu;
    {
        const bool branch_taken_0x3415ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 25));
        ctx->pc = 0x3415F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415ECu;
        // 0x3415f0: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415ec) {
            ctx->pc = 0x341638u;
            goto label_341638;
        }
    }
    ctx->pc = 0x3415F4u;
    // 0x3415f4: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x3415f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3415f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3415F8u;
    {
        const bool branch_taken_0x3415f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415F8u;
        // 0x3415fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415f8) {
            ctx->pc = 0x341618u;
            goto label_341618;
        }
    }
    ctx->pc = 0x341600u;
    // 0x341600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341604: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341604u;
    {
        const bool branch_taken_0x341604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x341608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341604u;
        // 0x341608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341604) {
            ctx->pc = 0x341628u;
            goto label_341628;
        }
    }
    ctx->pc = 0x34160Cu;
    // 0x34160c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x34160Cu;
    {
        const bool branch_taken_0x34160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34160Cu;
        // 0x341610: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34160c) {
            ctx->pc = 0x34178Cu;
            goto label_34178c;
        }
    }
    ctx->pc = 0x341614u;
    // 0x341614: 0x0  nop
    ctx->pc = 0x341614u;
    // NOP
label_341618:
    // 0x341618: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x341618u;
    {
        const bool branch_taken_0x341618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341618u;
        // 0x34161c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341618) {
            ctx->pc = 0x341650u;
            goto label_341650;
        }
    }
    ctx->pc = 0x341620u;
    // 0x341620: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x341620u;
    {
        const bool branch_taken_0x341620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341620u;
        // 0x341624: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341620) {
            ctx->pc = 0x34178Cu;
            goto label_34178c;
        }
    }
    ctx->pc = 0x341628u;
label_341628:
    // 0x341628: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x341628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34162c: 0xad590000  sw          $t9, 0x0($t2)
    ctx->pc = 0x34162cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 25));
    // 0x341630: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x341630u;
    {
        const bool branch_taken_0x341630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341630u;
        // 0x341634: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341630) {
            ctx->pc = 0x34165Cu;
            goto label_34165c;
        }
    }
    ctx->pc = 0x341638u;
label_341638:
    // 0x341638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34163c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x341640: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x341640u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x341644: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x341644u;
    {
        const bool branch_taken_0x341644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341644u;
        // 0x341648: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341644) {
            ctx->pc = 0x34165Cu;
            goto label_34165c;
        }
    }
    ctx->pc = 0x34164Cu;
    // 0x34164c: 0x0  nop
    ctx->pc = 0x34164cu;
    // NOP
label_341650:
    // 0x341650: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x341650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x341654: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x341654u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x341658: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x341658u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_34165c:
    // 0x34165c: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x34165cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x341660: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x341660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x341664: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x341664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x341668: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x341668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34166c: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x34166cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x341670: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x341674: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x341674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x341678: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x341678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x34167c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x34167cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x341680: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x341680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x341684: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x341684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x341688: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x341688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x34168c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x341690: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x341690u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x341694: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x341694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x341698: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x341698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x34169c: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x34169cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3416a0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3416a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3416a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3416a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3416a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3416a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3416ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3416acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3416b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3416b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3416b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3416b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3416b8: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x3416b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3416bc: 0x91640003  lbu         $a0, 0x3($t3)
    ctx->pc = 0x3416bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3416c0: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x3416c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3416c4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3416c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3416c8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3416c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3416cc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3416ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3416d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3416d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3416d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3416d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3416d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3416d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3416dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3416dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3416e0: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x3416e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3416e4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3416e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3416e8: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x3416e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3416ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3416ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3416f0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3416f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3416f4: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x3416f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x3416f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3416f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3416fc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3416fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x341700: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x341700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x341704: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x341704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x341708: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x341708u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34170c: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x34170Cu;
    {
        const bool branch_taken_0x34170c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x341710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34170Cu;
        // 0x341710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34170c) {
            ctx->pc = 0x341730u;
            goto label_341730;
        }
    }
    ctx->pc = 0x341714u;
    // 0x341714: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x341714u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x341718: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x341718u;
    {
        const bool branch_taken_0x341718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341718) {
            ctx->pc = 0x34171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341718u;
            // 0x34171c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341720u;
            goto label_341720;
        }
    }
    ctx->pc = 0x341720u;
label_341720:
    // 0x341720: 0x1012  mflo        $v0
    ctx->pc = 0x341720u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x341724: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x341724u;
    {
        const bool branch_taken_0x341724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341724u;
        // 0x341728: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341724) {
            ctx->pc = 0x341784u;
            goto label_341784;
        }
    }
    ctx->pc = 0x34172Cu;
    // 0x34172c: 0x0  nop
    ctx->pc = 0x34172cu;
    // NOP
label_341730:
    // 0x341730: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x341730u;
    {
        const bool branch_taken_0x341730 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x341730) {
            ctx->pc = 0x341750u;
            goto label_341750;
        }
    }
    ctx->pc = 0x341738u;
    // 0x341738: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x341738u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34173c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34173Cu;
    {
        const bool branch_taken_0x34173c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34173c) {
            ctx->pc = 0x341740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34173Cu;
            // 0x341740: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341744u;
            goto label_341744;
        }
    }
    ctx->pc = 0x341744u;
label_341744:
    // 0x341744: 0x1012  mflo        $v0
    ctx->pc = 0x341744u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x341748: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x341748u;
    {
        const bool branch_taken_0x341748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341748u;
        // 0x34174c: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341748) {
            ctx->pc = 0x341784u;
            goto label_341784;
        }
    }
    ctx->pc = 0x341750u;
label_341750:
    // 0x341750: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x341750u;
    {
        const bool branch_taken_0x341750 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x341754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341750u;
        // 0x341754: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341750) {
            ctx->pc = 0x341780u;
            goto label_341780;
        }
    }
    ctx->pc = 0x341758u;
    // 0x341758: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x341758u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x34175c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34175Cu;
    {
        const bool branch_taken_0x34175c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34175c) {
            ctx->pc = 0x341760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34175Cu;
            // 0x341760: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341764u;
            goto label_341764;
        }
    }
    ctx->pc = 0x341764u;
label_341764:
    // 0x341764: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x341764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x341768: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x341768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x34176c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x34176cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x341770: 0x1012  mflo        $v0
    ctx->pc = 0x341770u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x341774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x341774u;
    {
        const bool branch_taken_0x341774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341774u;
        // 0x341778: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341774) {
            ctx->pc = 0x341784u;
            goto label_341784;
        }
    }
    ctx->pc = 0x34177Cu;
    // 0x34177c: 0x0  nop
    ctx->pc = 0x34177cu;
    // NOP
label_341780:
    // 0x341780: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x341780u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_341784:
    // 0x341784: 0x1cc1021  addu        $v0, $t6, $t4
    ctx->pc = 0x341784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_341788:
    // 0x341788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34178c:
    // 0x34178c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34178cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341790: 0x3e00008  jr          $ra
    ctx->pc = 0x341790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341790u;
        // 0x341794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341798u;
}
