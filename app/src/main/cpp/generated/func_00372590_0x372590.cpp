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

// Function: func_00372590
// Address: 0x372590 - 0x372c68
void func_00372590_0x372590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00372590_0x372590");
#endif

    switch (ctx->pc) {
        case 0x372b00u: goto label_372b00;
        default: break;
    }

    ctx->pc = 0x372590u;

    // 0x372590: 0x248b0160  addiu       $t3, $a0, 0x160
    ctx->pc = 0x372590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x372594: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x372594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372598: 0x8d620440  lw          $v0, 0x440($t3)
    ctx->pc = 0x372598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1088)));
    // 0x37259c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x37259cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3725a0: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x3725a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x3725a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3725a8: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x3725a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x3725ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3725ACu;
    {
        const bool branch_taken_0x3725ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725ACu;
        // 0x3725b0: 0xad620440  sw          $v0, 0x440($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725ac) {
            ctx->pc = 0x3725C0u;
            goto label_3725c0;
        }
    }
    ctx->pc = 0x3725B4u;
    // 0x3725b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3725b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3725b8: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3725B8u;
    {
        const bool branch_taken_0x3725b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3725b8) {
            ctx->pc = 0x3725BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3725B8u;
            // 0x3725bc: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3725D0u;
            goto label_3725d0;
        }
    }
    ctx->pc = 0x3725C0u;
label_3725c0:
    // 0x3725c0: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x3725c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x3725c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3725C4u;
    {
        const bool branch_taken_0x3725c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3725C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725C4u;
        // 0x3725c8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725c4) {
            ctx->pc = 0x3725DCu;
            goto label_3725dc;
        }
    }
    ctx->pc = 0x3725CCu;
    // 0x3725cc: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x3725ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_3725d0:
    // 0x3725d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3725d4: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x3725d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x3725d8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3725d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_3725dc:
    // 0x3725dc: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x3725dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x3725e0: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x3725e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x3725e4: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x3725e4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3725e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3725e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3725ec: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x3725ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3725f0: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3725f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3725f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3725f8: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x3725f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3725fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3725fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372600: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x372600u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372604: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372608: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372608u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37260c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37260cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372610: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372614: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372618: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x372618u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x37261c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37261cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372620: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x372620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x372624: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372628: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37262c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37262cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372630: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x372630u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x372634: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372638: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x372638u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x37263c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x37263cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372640: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372644: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x372644u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x372648: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372648u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x37264c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x37264cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x372650: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372654: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372658: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x372658u;
    {
        const bool branch_taken_0x372658 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x37265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372658u;
        // 0x37265c: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372658) {
            ctx->pc = 0x372678u;
            goto label_372678;
        }
    }
    ctx->pc = 0x372660u;
    // 0x372660: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x372660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x372664: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372668: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x372668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x37266c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x37266cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x372670u;
    {
        const bool branch_taken_0x372670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372670u;
        // 0x372674: 0xad6200d8  sw          $v0, 0xD8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372670) {
            ctx->pc = 0x372680u;
            goto label_372680;
        }
    }
    ctx->pc = 0x372678u;
label_372678:
    // 0x372678: 0xad6900d8  sw          $t1, 0xD8($t3)
    ctx->pc = 0x372678u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 9));
    // 0x37267c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x37267cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_372680:
    // 0x372680: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372680u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372684: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372688: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37268c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37268cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372690: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372690u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372694: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372698: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x37269c: 0x29420016  slti        $v0, $t2, 0x16
    ctx->pc = 0x37269cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x3726a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3726a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3726a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3726a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3726a8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3726a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3726ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3726acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3726b0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3726b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3726b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3726b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3726b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3726B8u;
    {
        const bool branch_taken_0x3726b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3726BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726B8u;
        // 0x3726bc: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3726b8) {
            ctx->pc = 0x372730u;
            goto label_372730;
        }
    }
    ctx->pc = 0x3726C0u;
    // 0x3726c0: 0x254affea  addiu       $t2, $t2, -0x16
    ctx->pc = 0x3726c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967274));
    // 0x3726c4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3726C4u;
    {
        const bool branch_taken_0x3726c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3726C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726C4u;
        // 0x3726c8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3726c4) {
            ctx->pc = 0x3726E8u;
            goto label_3726e8;
        }
    }
    ctx->pc = 0x3726CCu;
    // 0x3726cc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x3726ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3726d0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3726d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3726d4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3726d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3726d8: 0x91d82  srl         $v1, $t1, 22
    ctx->pc = 0x3726d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x3726dc: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x3726dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x3726e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3726E0u;
    {
        const bool branch_taken_0x3726e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3726E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726E0u;
        // 0x3726e4: 0xad6300dc  sw          $v1, 0xDC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3726e0) {
            ctx->pc = 0x3726F4u;
            goto label_3726f4;
        }
    }
    ctx->pc = 0x3726E8u;
label_3726e8:
    // 0x3726e8: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x3726e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x3726ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3726ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3726f0: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x3726f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
label_3726f4:
    // 0x3726f4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3726f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3726f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3726f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3726fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3726fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372700: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372704: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372704u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372708: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37270c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x37270cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372714: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372718: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37271c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x37271cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372720: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372724: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372728: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x372728u;
    {
        const bool branch_taken_0x372728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372728u;
        // 0x37272c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372728) {
            ctx->pc = 0x372740u;
            goto label_372740;
        }
    }
    ctx->pc = 0x372730u;
label_372730:
    // 0x372730: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x372730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x372734: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x372734u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x372738: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x372738u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
    // 0x37273c: 0x254a000a  addiu       $t2, $t2, 0xA
    ctx->pc = 0x37273cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
label_372740:
    // 0x372740: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x372740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x372744: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x372744u;
    {
        const bool branch_taken_0x372744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372744u;
        // 0x372748: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372744) {
            ctx->pc = 0x3727C0u;
            goto label_3727c0;
        }
    }
    ctx->pc = 0x37274Cu;
    // 0x37274c: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x37274cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x372750: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x372750u;
    {
        const bool branch_taken_0x372750 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372750u;
        // 0x372754: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372750) {
            ctx->pc = 0x372778u;
            goto label_372778;
        }
    }
    ctx->pc = 0x372758u;
    // 0x372758: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x37275c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x37275cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372760: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372760u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372764: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x372764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x372768: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372768u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x37276c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37276Cu;
    {
        const bool branch_taken_0x37276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37276Cu;
        // 0x372770: 0xad6300e0  sw          $v1, 0xE0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37276c) {
            ctx->pc = 0x372784u;
            goto label_372784;
        }
    }
    ctx->pc = 0x372774u;
    // 0x372774: 0x0  nop
    ctx->pc = 0x372774u;
    // NOP
label_372778:
    // 0x372778: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x372778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x37277c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x37277cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372780: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x372780u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
label_372784:
    // 0x372784: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372784u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372788: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37278c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x37278cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372790: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372794: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372798: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37279c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x37279cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3727a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3727a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3727a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3727a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3727a8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3727a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3727ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3727acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3727b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3727b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3727b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3727b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3727b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3727B8u;
    {
        const bool branch_taken_0x3727b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727B8u;
        // 0x3727bc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727b8) {
            ctx->pc = 0x3727CCu;
            goto label_3727cc;
        }
    }
    ctx->pc = 0x3727C0u;
label_3727c0:
    // 0x3727c0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3727c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3727c4: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x3727c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
    // 0x3727c8: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x3727c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_3727cc:
    // 0x3727cc: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x3727ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3727d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3727D0u;
    {
        const bool branch_taken_0x3727d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3727D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727D0u;
        // 0x3727d4: 0x91402  srl         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727d0) {
            ctx->pc = 0x372848u;
            goto label_372848;
        }
    }
    ctx->pc = 0x3727D8u;
    // 0x3727d8: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x3727d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x3727dc: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3727DCu;
    {
        const bool branch_taken_0x3727dc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727DCu;
        // 0x3727e0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727dc) {
            ctx->pc = 0x372800u;
            goto label_372800;
        }
    }
    ctx->pc = 0x3727E4u;
    // 0x3727e4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x3727e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3727e8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3727e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3727ec: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3727ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3727f0: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x3727f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3727f4: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x3727f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x3727f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3727F8u;
    {
        const bool branch_taken_0x3727f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727F8u;
        // 0x3727fc: 0xad6300e4  sw          $v1, 0xE4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727f8) {
            ctx->pc = 0x37280Cu;
            goto label_37280c;
        }
    }
    ctx->pc = 0x372800u;
label_372800:
    // 0x372800: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x372800u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x372804: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372808: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x372808u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
label_37280c:
    // 0x37280c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x37280cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372810: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372814: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372818: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37281c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37281cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372820: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372824: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372828: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37282c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37282cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372830: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372834: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372838: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37283c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37283cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372840u;
    {
        const bool branch_taken_0x372840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372840u;
        // 0x372844: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372840) {
            ctx->pc = 0x372854u;
            goto label_372854;
        }
    }
    ctx->pc = 0x372848u;
label_372848:
    // 0x372848: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x372848u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x37284c: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x37284cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
    // 0x372850: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x372850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_372854:
    // 0x372854: 0x8d6600e0  lw          $a2, 0xE0($t3)
    ctx->pc = 0x372854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
    // 0x372858: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x372858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x37285c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x37285cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x372860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372860u;
    {
        const bool branch_taken_0x372860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372860u;
        // 0x372864: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372860) {
            ctx->pc = 0x372878u;
            goto label_372878;
        }
    }
    ctx->pc = 0x372868u;
    // 0x372868: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x372868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
    // 0x37286c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x372870: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x372870u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x372874: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x372874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_372878:
    // 0x372878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x372878u;
    {
        const bool branch_taken_0x372878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372878u;
        // 0x37287c: 0x8d6204a4  lw          $v0, 0x4A4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372878) {
            ctx->pc = 0x372898u;
            goto label_372898;
        }
    }
    ctx->pc = 0x372880u;
    // 0x372880: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x372880u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x372884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x372884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x372888: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x372888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37288c: 0xad6204a4  sw          $v0, 0x4A4($t3)
    ctx->pc = 0x37288cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 2));
    // 0x372890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372890u;
    {
        const bool branch_taken_0x372890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372890u;
        // 0x372894: 0xad6304ac  sw          $v1, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372890) {
            ctx->pc = 0x3728B4u;
            goto label_3728b4;
        }
    }
    ctx->pc = 0x372898u;
label_372898:
    // 0x372898: 0x8d6304a8  lw          $v1, 0x4A8($t3)
    ctx->pc = 0x372898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1192)));
    // 0x37289c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3728a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3728a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3728a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3728a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3728a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3728a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3728ac: 0xad6304a8  sw          $v1, 0x4A8($t3)
    ctx->pc = 0x3728acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 3));
    // 0x3728b0: 0xad6204ac  sw          $v0, 0x4AC($t3)
    ctx->pc = 0x3728b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 2));
label_3728b4:
    // 0x3728b4: 0x24c2fffe  addiu       $v0, $a2, -0x2
    ctx->pc = 0x3728b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x3728b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3728b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3728bc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3728BCu;
    {
        const bool branch_taken_0x3728bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3728C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728BCu;
        // 0x3728c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728bc) {
            ctx->pc = 0x3729D8u;
            goto label_3729d8;
        }
    }
    ctx->pc = 0x3728C4u;
    // 0x3728c4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x3728c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3728c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3728C8u;
    {
        const bool branch_taken_0x3728c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3728CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728C8u;
        // 0x3728cc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728c8) {
            ctx->pc = 0x372940u;
            goto label_372940;
        }
    }
    ctx->pc = 0x3728D0u;
    // 0x3728d0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x3728d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x3728d4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3728D4u;
    {
        const bool branch_taken_0x3728d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3728D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728D4u;
        // 0x3728d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728d4) {
            ctx->pc = 0x3728F8u;
            goto label_3728f8;
        }
    }
    ctx->pc = 0x3728DCu;
    // 0x3728dc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x3728dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3728e0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3728e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3728e4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3728e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3728e8: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x3728e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3728ec: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x3728ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x3728f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3728F0u;
    {
        const bool branch_taken_0x3728f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3728F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728F0u;
        // 0x3728f4: 0xad6300e8  sw          $v1, 0xE8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728f0) {
            ctx->pc = 0x372904u;
            goto label_372904;
        }
    }
    ctx->pc = 0x3728F8u;
label_3728f8:
    // 0x3728f8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x3728f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3728fc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3728fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372900: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x372900u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
label_372904:
    // 0x372904: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372904u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372908: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37290c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x37290cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372910: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372914: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372914u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372918: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37291c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x37291cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372920: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372924: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372924u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372928: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37292c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x37292cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372930: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372934: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372934u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372938u;
    {
        const bool branch_taken_0x372938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372938u;
        // 0x37293c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372938) {
            ctx->pc = 0x37294Cu;
            goto label_37294c;
        }
    }
    ctx->pc = 0x372940u;
label_372940:
    // 0x372940: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x372940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x372944: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x372944u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
    // 0x372948: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x372948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_37294c:
    // 0x37294c: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x37294cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x372950: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372950u;
    {
        const bool branch_taken_0x372950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372950u;
        // 0x372954: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372950) {
            ctx->pc = 0x3729C8u;
            goto label_3729c8;
        }
    }
    ctx->pc = 0x372958u;
    // 0x372958: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x372958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x37295c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x37295Cu;
    {
        const bool branch_taken_0x37295c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37295Cu;
        // 0x372960: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37295c) {
            ctx->pc = 0x372980u;
            goto label_372980;
        }
    }
    ctx->pc = 0x372964u;
    // 0x372964: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372968: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x37296c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x37296cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372970: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x372970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x372974: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372974u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372978u;
    {
        const bool branch_taken_0x372978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372978u;
        // 0x37297c: 0xad6300ec  sw          $v1, 0xEC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372978) {
            ctx->pc = 0x37298Cu;
            goto label_37298c;
        }
    }
    ctx->pc = 0x372980u;
label_372980:
    // 0x372980: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x372980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x372984: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372988: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x372988u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
label_37298c:
    // 0x37298c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x37298cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372990: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372994: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372998: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37299c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37299cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3729a0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3729a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3729a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3729a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3729a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3729a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3729ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3729acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3729b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3729b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3729b4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3729b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3729b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3729b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3729bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3729bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3729c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3729C0u;
    {
        const bool branch_taken_0x3729c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3729C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729C0u;
        // 0x3729c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729c0) {
            ctx->pc = 0x3729D4u;
            goto label_3729d4;
        }
    }
    ctx->pc = 0x3729C8u;
label_3729c8:
    // 0x3729c8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3729c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3729cc: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x3729ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
    // 0x3729d0: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x3729d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_3729d4:
    // 0x3729d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3729d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3729d8:
    // 0x3729d8: 0x14c20047  bne         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3729D8u;
    {
        const bool branch_taken_0x3729d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3729DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729D8u;
        // 0x3729dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729d8) {
            ctx->pc = 0x372AF8u;
            goto label_372af8;
        }
    }
    ctx->pc = 0x3729E0u;
    // 0x3729e0: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x3729e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3729e4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3729E4u;
    {
        const bool branch_taken_0x3729e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3729E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729E4u;
        // 0x3729e8: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729e4) {
            ctx->pc = 0x372A60u;
            goto label_372a60;
        }
    }
    ctx->pc = 0x3729ECu;
    // 0x3729ec: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x3729ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x3729f0: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3729F0u;
    {
        const bool branch_taken_0x3729f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3729F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729F0u;
        // 0x3729f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729f0) {
            ctx->pc = 0x372A18u;
            goto label_372a18;
        }
    }
    ctx->pc = 0x3729F8u;
    // 0x3729f8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x3729f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3729fc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3729fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372a00: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372a00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372a04: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x372a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372a08: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372a08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372a0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x372A0Cu;
    {
        const bool branch_taken_0x372a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A0Cu;
        // 0x372a10: 0xad6300f0  sw          $v1, 0xF0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a0c) {
            ctx->pc = 0x372A24u;
            goto label_372a24;
        }
    }
    ctx->pc = 0x372A14u;
    // 0x372a14: 0x0  nop
    ctx->pc = 0x372a14u;
    // NOP
label_372a18:
    // 0x372a18: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x372a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372a1c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a20: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x372a20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
label_372a24:
    // 0x372a24: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372a24u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372a28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372a2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372a30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372a34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372a34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372a38: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372a3c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372a40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372a44: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372a44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372a48: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372a4c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372a50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372a54: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372a54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372A58u;
    {
        const bool branch_taken_0x372a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A58u;
        // 0x372a5c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a58) {
            ctx->pc = 0x372A6Cu;
            goto label_372a6c;
        }
    }
    ctx->pc = 0x372A60u;
label_372a60:
    // 0x372a60: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x372a60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x372a64: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x372a64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
    // 0x372a68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x372a68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_372a6c:
    // 0x372a6c: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x372a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x372a70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372A70u;
    {
        const bool branch_taken_0x372a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A70u;
        // 0x372a74: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a70) {
            ctx->pc = 0x372AE8u;
            goto label_372ae8;
        }
    }
    ctx->pc = 0x372A78u;
    // 0x372a78: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x372a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x372a7c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x372A7Cu;
    {
        const bool branch_taken_0x372a7c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A7Cu;
        // 0x372a80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a7c) {
            ctx->pc = 0x372AA0u;
            goto label_372aa0;
        }
    }
    ctx->pc = 0x372A84u;
    // 0x372a84: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372a88: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372a8c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372a8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372a90: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x372a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x372a94: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372a94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372a98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372A98u;
    {
        const bool branch_taken_0x372a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A98u;
        // 0x372a9c: 0xad6300f4  sw          $v1, 0xF4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a98) {
            ctx->pc = 0x372AACu;
            goto label_372aac;
        }
    }
    ctx->pc = 0x372AA0u;
label_372aa0:
    // 0x372aa0: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x372aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x372aa4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372aa8: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x372aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
label_372aac:
    // 0x372aac: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372aacu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372ab0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372ab4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372ab8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372abc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372ac0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372ac4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372ac8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372acc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372accu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372ad0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372ad4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372ad8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372adc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372ae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372AE0u;
    {
        const bool branch_taken_0x372ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372AE0u;
        // 0x372ae4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ae0) {
            ctx->pc = 0x372AF4u;
            goto label_372af4;
        }
    }
    ctx->pc = 0x372AE8u;
label_372ae8:
    // 0x372ae8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x372ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x372aec: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x372aecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
    // 0x372af0: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x372af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_372af4:
    // 0x372af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x372af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372af8:
    // 0x372af8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x372AF8u;
    {
        const bool branch_taken_0x372af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372AF8u;
        // 0x372afc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372af8) {
            ctx->pc = 0x372B84u;
            goto label_372b84;
        }
    }
    ctx->pc = 0x372B00u;
label_372b00:
    // 0x372b00: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372B00u;
    {
        const bool branch_taken_0x372b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B00u;
        // 0x372b04: 0x91602  srl         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b00) {
            ctx->pc = 0x372B78u;
            goto label_372b78;
        }
    }
    ctx->pc = 0x372B08u;
    // 0x372b08: 0x254affe8  addiu       $t2, $t2, -0x18
    ctx->pc = 0x372b08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967272));
    // 0x372b0c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x372B0Cu;
    {
        const bool branch_taken_0x372b0c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B0Cu;
        // 0x372b10: 0xaa1023  subu        $v0, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b0c) {
            ctx->pc = 0x372B30u;
            goto label_372b30;
        }
    }
    ctx->pc = 0x372B14u;
    // 0x372b14: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372b18: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372b18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372b1c: 0x91e02  srl         $v1, $t1, 24
    ctx->pc = 0x372b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x372b20: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372b20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372b24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x372B24u;
    {
        const bool branch_taken_0x372b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B24u;
        // 0x372b28: 0xad6300fc  sw          $v1, 0xFC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b24) {
            ctx->pc = 0x372B3Cu;
            goto label_372b3c;
        }
    }
    ctx->pc = 0x372B2Cu;
    // 0x372b2c: 0x0  nop
    ctx->pc = 0x372b2cu;
    // NOP
label_372b30:
    // 0x372b30: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x372b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x372b34: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372b34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b38: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x372b38u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
label_372b3c:
    // 0x372b3c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372b3cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372b40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372b44: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372b48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372b4c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372b50: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372b54: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372b58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372b5c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372b60: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372b64: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372b68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372b6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372b70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372B70u;
    {
        const bool branch_taken_0x372b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B70u;
        // 0x372b74: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b70) {
            ctx->pc = 0x372B84u;
            goto label_372b84;
        }
    }
    ctx->pc = 0x372B78u;
label_372b78:
    // 0x372b78: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x372b78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x372b7c: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x372b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
    // 0x372b80: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x372b80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_372b84:
    // 0x372b84: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x372b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x372b88: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372B88u;
    {
        const bool branch_taken_0x372b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B88u;
        // 0x372b8c: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b88) {
            ctx->pc = 0x372C00u;
            goto label_372c00;
        }
    }
    ctx->pc = 0x372B90u;
    // 0x372b90: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x372b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x372b94: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x372B94u;
    {
        const bool branch_taken_0x372b94 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B94u;
        // 0x372b98: 0x8a1023  subu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b94) {
            ctx->pc = 0x372BB8u;
            goto label_372bb8;
        }
    }
    ctx->pc = 0x372B9Cu;
    // 0x372b9c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372ba0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372ba0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372ba4: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x372ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372ba8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372bac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x372BACu;
    {
        const bool branch_taken_0x372bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BACu;
        // 0x372bb0: 0xad6300f8  sw          $v1, 0xF8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372bac) {
            ctx->pc = 0x372BC4u;
            goto label_372bc4;
        }
    }
    ctx->pc = 0x372BB4u;
    // 0x372bb4: 0x0  nop
    ctx->pc = 0x372bb4u;
    // NOP
label_372bb8:
    // 0x372bb8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x372bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372bbc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372bbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372bc0: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x372bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
label_372bc4:
    // 0x372bc4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372bc4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372bc8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372bcc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372bd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372bd4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372bd8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372bdc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372be0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372be4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372be4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372be8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372bec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372becu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372bf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372bf4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372bf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372BF8u;
    {
        const bool branch_taken_0x372bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BF8u;
        // 0x372bfc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372bf8) {
            ctx->pc = 0x372C0Cu;
            goto label_372c0c;
        }
    }
    ctx->pc = 0x372C00u;
label_372c00:
    // 0x372c00: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x372c00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x372c04: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x372c04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
    // 0x372c08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x372c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_372c0c:
    // 0x372c0c: 0x8d6200f8  lw          $v0, 0xF8($t3)
    ctx->pc = 0x372c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 248)));
    // 0x372c10: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x372C10u;
    {
        const bool branch_taken_0x372c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372c10) {
            ctx->pc = 0x372C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372C10u;
            // 0x372c14: 0x29420018  slti        $v0, $t2, 0x18 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)24) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x372B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372b00;
        }
    }
    ctx->pc = 0x372C18u;
    // 0x372c18: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x372c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x372c1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x372c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x372c20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x372c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x372c24: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x372c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x372c28: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x372c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x372c2c: 0x24c60444  addiu       $a2, $a2, 0x444
    ctx->pc = 0x372c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1092));
    // 0x372c30: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x372c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x372c34: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x372c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x372c38: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x372c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x372c3c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x372c3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x372c40: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x372c40u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x372c44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x372c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x372c48: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x372c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x372c4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x372c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x372c50: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x372c50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x372c54: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x372c54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x372c58: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x372c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x372c5c: 0xad63030c  sw          $v1, 0x30C($t3)
    ctx->pc = 0x372c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 3));
    // 0x372c60: 0x3e00008  jr          $ra
    ctx->pc = 0x372C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C60u;
        // 0x372c64: 0xad670308  sw          $a3, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C68u;
}
