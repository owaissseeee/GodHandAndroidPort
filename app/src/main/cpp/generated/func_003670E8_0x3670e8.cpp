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

// Function: func_003670E8
// Address: 0x3670e8 - 0x367550
void func_003670E8_0x3670e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003670E8_0x3670e8");
#endif

    ctx->pc = 0x3670e8u;

    // 0x3670e8: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x3670e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3670ec: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3670ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3670f0: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x3670f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3670f4: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x3670f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670f8: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x3670f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3670fc: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x3670fcu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367100: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367104: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x367104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x367108: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36710c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36710cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367110: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x367110u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367114: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367118: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x367118u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36711c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36711cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367120: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x367120u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367124: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367128: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36712c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36712cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367130: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367130u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x367134: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367134u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367138: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x367138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x36713c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36713cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367140: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x367140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367144: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367148: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367148u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x36714c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x367150: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367150u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367154: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x367154u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x367158: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x367158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36715c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x36715cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367160: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x367160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x367164: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367164u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x367168: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367168u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36716c: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x36716cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x367170: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x367170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x367174: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367178: 0xaa5004  sllv        $t2, $t2, $a1
    ctx->pc = 0x367178u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
    // 0x36717c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36717Cu;
    {
        const bool branch_taken_0x36717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36717Cu;
        // 0x367180: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36717c) {
            ctx->pc = 0x3671E8u;
            goto label_3671e8;
        }
    }
    ctx->pc = 0x367184u;
    // 0x367184: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x367184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x367188: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x367188u;
    {
        const bool branch_taken_0x367188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367188u;
        // 0x36718c: 0x81042  srl         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367188) {
            ctx->pc = 0x3671A0u;
            goto label_3671a0;
        }
    }
    ctx->pc = 0x367190u;
    // 0x367190: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x367190u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367194: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x367194u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x367198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x367198u;
    {
        const bool branch_taken_0x367198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367198u;
        // 0x36719c: 0x85040  sll         $t2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367198) {
            ctx->pc = 0x3671A8u;
            goto label_3671a8;
        }
    }
    ctx->pc = 0x3671A0u;
label_3671a0:
    // 0x3671a0: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x3671a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x3671a4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3671a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3671a8:
    // 0x3671a8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3671a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3671ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3671acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3671b0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3671b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3671b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3671b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3671b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3671b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3671bc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3671bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3671c0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3671c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3671c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3671c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3671c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3671c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3671cc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3671ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3671d0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3671d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3671d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3671d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3671d8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3671d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3671dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3671DCu;
    {
        const bool branch_taken_0x3671dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671DCu;
        // 0x3671e0: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671dc) {
            ctx->pc = 0x3671F4u;
            goto label_3671f4;
        }
    }
    ctx->pc = 0x3671E4u;
    // 0x3671e4: 0x0  nop
    ctx->pc = 0x3671e4u;
    // NOP
label_3671e8:
    // 0x3671e8: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x3671e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x3671ec: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x3671ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3671f0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3671f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3671f4:
    // 0x3671f4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3671f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3671f8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3671f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3671fc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3671FCu;
    {
        const bool branch_taken_0x3671fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3671fc) {
            ctx->pc = 0x367200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3671FCu;
            // 0x367200: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367244u;
            goto label_367244;
        }
    }
    ctx->pc = 0x367204u;
    // 0x367204: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x367204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x367208: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x367208u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x36720c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x36720cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367210: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367214: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367218: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36721c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36721cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367220: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367224: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367224u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367228: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36722c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36722cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367230: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367234: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367238: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36723c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36723cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367240: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367240u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_367244:
    // 0x367244: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x367244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x367248: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x367248u;
    {
        const bool branch_taken_0x367248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367248u;
        // 0x36724c: 0xa6742  srl         $t4, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367248) {
            ctx->pc = 0x3672B8u;
            goto label_3672b8;
        }
    }
    ctx->pc = 0x367250u;
    // 0x367250: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x367250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x367254: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x367254u;
    {
        const bool branch_taken_0x367254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367254u;
        // 0x367258: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367254) {
            ctx->pc = 0x367278u;
            goto label_367278;
        }
    }
    ctx->pc = 0x36725Cu;
    // 0x36725c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x367260: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x367260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x367264: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x367264u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367268: 0xa6742  srl         $t4, $t2, 29
    ctx->pc = 0x367268u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x36726c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36726Cu;
    {
        const bool branch_taken_0x36726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36726Cu;
        // 0x367270: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36726c) {
            ctx->pc = 0x36727Cu;
            goto label_36727c;
        }
    }
    ctx->pc = 0x367274u;
    // 0x367274: 0x0  nop
    ctx->pc = 0x367274u;
    // NOP
label_367278:
    // 0x367278: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x367278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_36727c:
    // 0x36727c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x36727cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367280: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367284: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367288: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36728c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36728cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367290: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367294: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367298: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36729c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36729cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3672a0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3672a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3672a4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3672a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3672a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3672a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3672ac: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3672acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3672b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3672B0u;
    {
        const bool branch_taken_0x3672b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3672B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672B0u;
        // 0x3672b4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3672b0) {
            ctx->pc = 0x3672C0u;
            goto label_3672c0;
        }
    }
    ctx->pc = 0x3672B8u;
label_3672b8:
    // 0x3672b8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3672b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3672bc: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x3672bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_3672c0:
    // 0x3672c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3672c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3672c4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3672c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3672c8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3672C8u;
    {
        const bool branch_taken_0x3672c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3672c8) {
            ctx->pc = 0x3672CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3672C8u;
            // 0x3672cc: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367310u;
            goto label_367310;
        }
    }
    ctx->pc = 0x3672D0u;
    // 0x3672d0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x3672d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x3672d4: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x3672d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3672d8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3672d8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3672dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3672dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3672e0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3672e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3672e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3672e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3672e8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3672e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3672ec: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3672ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3672f0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3672f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3672f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3672f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3672f8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3672f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3672fc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3672fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367300: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367300u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367304: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367308: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367308u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36730c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36730cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_367310:
    // 0x367310: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x367310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x367314: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x367314u;
    {
        const bool branch_taken_0x367314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367314u;
        // 0x367318: 0xa5c42  srl         $t3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367314) {
            ctx->pc = 0x367380u;
            goto label_367380;
        }
    }
    ctx->pc = 0x36731Cu;
    // 0x36731c: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x36731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x367320: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x367320u;
    {
        const bool branch_taken_0x367320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367320u;
        // 0x367324: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367320) {
            ctx->pc = 0x367340u;
            goto label_367340;
        }
    }
    ctx->pc = 0x367328u;
    // 0x367328: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x367328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36732c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x36732cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x367330: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x367330u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367334: 0xa5c42  srl         $t3, $t2, 17
    ctx->pc = 0x367334u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x367338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x367338u;
    {
        const bool branch_taken_0x367338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367338u;
        // 0x36733c: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367338) {
            ctx->pc = 0x367344u;
            goto label_367344;
        }
    }
    ctx->pc = 0x367340u;
label_367340:
    // 0x367340: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x367340u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_367344:
    // 0x367344: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x367344u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367348: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36734c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36734cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367350: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367354: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367354u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367358: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36735c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36735cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367360: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367364: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367368: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36736c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x36736cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367370: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367374: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367374u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367378: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x367378u;
    {
        const bool branch_taken_0x367378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367378u;
        // 0x36737c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367378) {
            ctx->pc = 0x367388u;
            goto label_367388;
        }
    }
    ctx->pc = 0x367380u;
label_367380:
    // 0x367380: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x367380u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x367384: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x367384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_367388:
    // 0x367388: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36738c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x36738cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x367390: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x367390u;
    {
        const bool branch_taken_0x367390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367390) {
            ctx->pc = 0x367394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367390u;
            // 0x367394: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3673D8u;
            goto label_3673d8;
        }
    }
    ctx->pc = 0x367398u;
    // 0x367398: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x367398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x36739c: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x36739cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3673a0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3673a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3673a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3673a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3673a8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3673a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3673ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3673acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3673b0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3673b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3673b4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3673b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3673b8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3673b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3673bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3673bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3673c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3673c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3673c4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3673c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3673c8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3673c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3673cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3673ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3673d0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3673d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3673d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3673d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3673d8:
    // 0x3673d8: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x3673d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3673dc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3673DCu;
    {
        const bool branch_taken_0x3673dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3673E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673DCu;
        // 0x3673e0: 0xa3c42  srl         $a3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673dc) {
            ctx->pc = 0x367448u;
            goto label_367448;
        }
    }
    ctx->pc = 0x3673E4u;
    // 0x3673e4: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x3673e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x3673e8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3673E8u;
    {
        const bool branch_taken_0x3673e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3673ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673E8u;
        // 0x3673ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673e8) {
            ctx->pc = 0x367408u;
            goto label_367408;
        }
    }
    ctx->pc = 0x3673F0u;
    // 0x3673f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3673f4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3673f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3673f8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3673f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3673fc: 0xa3c42  srl         $a3, $t2, 17
    ctx->pc = 0x3673fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x367400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x367400u;
    {
        const bool branch_taken_0x367400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367400u;
        // 0x367404: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367400) {
            ctx->pc = 0x36740Cu;
            goto label_36740c;
        }
    }
    ctx->pc = 0x367408u;
label_367408:
    // 0x367408: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x367408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_36740c:
    // 0x36740c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x36740cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367410: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367414: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367418: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36741c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36741cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367420: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367424: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367424u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367428: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36742c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36742cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367430: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367434: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367434u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367438: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36743c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36743cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x367440u;
    {
        const bool branch_taken_0x367440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367440u;
        // 0x367444: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367440) {
            ctx->pc = 0x367450u;
            goto label_367450;
        }
    }
    ctx->pc = 0x367448u;
label_367448:
    // 0x367448: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x36744c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x36744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_367450:
    // 0x367450: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x367454: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x367454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x367458: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x367458u;
    {
        const bool branch_taken_0x367458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367458) {
            ctx->pc = 0x36745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367458u;
            // 0x36745c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3674A0u;
            goto label_3674a0;
        }
    }
    ctx->pc = 0x367460u;
    // 0x367460: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x367460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x367464: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x367464u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x367468: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x367468u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36746c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36746cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367470: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367474: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367478: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367478u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36747c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x36747cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367480: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367480u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367484: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367488: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367488u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36748c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36748cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367490: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367490u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367494: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367498: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367498u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36749c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36749cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3674a0:
    // 0x3674a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3674a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3674a4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3674a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3674a8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3674A8u;
    {
        const bool branch_taken_0x3674a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3674a8) {
            ctx->pc = 0x3674ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3674A8u;
            // 0x3674ac: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3674E8u;
            goto label_3674e8;
        }
    }
    ctx->pc = 0x3674B0u;
    // 0x3674b0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x3674b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x3674b4: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x3674b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3674b8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3674b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3674bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3674bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3674c0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3674c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3674c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3674c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3674c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3674c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3674cc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3674ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3674d0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3674d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3674d4: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x3674d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3674d8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3674d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3674dc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3674dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3674e0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3674e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3674e4: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x3674e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_3674e8:
    // 0x3674e8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x3674e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3674ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3674ECu;
    {
        const bool branch_taken_0x3674ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3674F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674ECu;
        // 0x3674f0: 0xa3282  srl         $a2, $t2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3674ec) {
            ctx->pc = 0x367514u;
            goto label_367514;
        }
    }
    ctx->pc = 0x3674F4u;
    // 0x3674f4: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x3674f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x3674f8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3674F8u;
    {
        const bool branch_taken_0x3674f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3674f8) {
            ctx->pc = 0x3674FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3674F8u;
            // 0x3674fc: 0x31830007  andi        $v1, $t4, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x367518u;
            goto label_367518;
        }
    }
    ctx->pc = 0x367500u;
    // 0x367500: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x367500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x367504: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x367504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x367508: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x367508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x36750c: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x36750cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367510: 0xa3282  srl         $a2, $t2, 10
    ctx->pc = 0x367510u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
label_367514:
    // 0x367514: 0x31830007  andi        $v1, $t4, 0x7
    ctx->pc = 0x367514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
label_367518:
    // 0x367518: 0x31627fff  andi        $v0, $t3, 0x7FFF
    ctx->pc = 0x367518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
    // 0x36751c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x36751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x367520: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x367520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x367524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x367524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367528: 0x2da20001  sltiu       $v0, $t5, 0x1
    ctx->pc = 0x367528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x36752c: 0x30e47fff  andi        $a0, $a3, 0x7FFF
    ctx->pc = 0x36752cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x367530: 0xadc6000c  sw          $a2, 0xC($t6)
    ctx->pc = 0x367530u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 6));
    // 0x367534: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x367534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x367538: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x367538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36753c: 0xadc20008  sw          $v0, 0x8($t6)
    ctx->pc = 0x36753cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 2));
    // 0x367540: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x367540u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x367544: 0x3e00008  jr          $ra
    ctx->pc = 0x367544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367544u;
        // 0x367548: 0xade40000  sw          $a0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36754Cu;
    // 0x36754c: 0x0  nop
    ctx->pc = 0x36754cu;
    // NOP
    ctx->pc = 0x367550u;
}
