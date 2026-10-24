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

// Function: func_00372028
// Address: 0x372028 - 0x372590
void func_00372028_0x372028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00372028_0x372028");
#endif

    ctx->pc = 0x372028u;

    // 0x372028: 0x248b0160  addiu       $t3, $a0, 0x160
    ctx->pc = 0x372028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x37202c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372030: 0x8d62043c  lw          $v0, 0x43C($t3)
    ctx->pc = 0x372030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1084)));
    // 0x372034: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x372034u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372038: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x372038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x37203c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x372040: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x372040u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x372044: 0xad62043c  sw          $v0, 0x43C($t3)
    ctx->pc = 0x372044u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1084), GPR_U32(ctx, 2));
    // 0x372048: 0xad6004a4  sw          $zero, 0x4A4($t3)
    ctx->pc = 0x372048u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 0));
    // 0x37204c: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x37204cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x372050: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372050u;
    {
        const bool branch_taken_0x372050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x372054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372050u;
        // 0x372054: 0xad6004ac  sw          $zero, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372050) {
            ctx->pc = 0x372064u;
            goto label_372064;
        }
    }
    ctx->pc = 0x372058u;
    // 0x372058: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x372058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37205c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37205Cu;
    {
        const bool branch_taken_0x37205c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x37205c) {
            ctx->pc = 0x372060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37205Cu;
            // 0x372060: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372074u;
            goto label_372074;
        }
    }
    ctx->pc = 0x372064u;
label_372064:
    // 0x372064: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x372064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x372068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372068u;
    {
        const bool branch_taken_0x372068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372068u;
        // 0x37206c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372068) {
            ctx->pc = 0x372080u;
            goto label_372080;
        }
    }
    ctx->pc = 0x372070u;
    // 0x372070: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x372070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_372074:
    // 0x372074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x372074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x372078: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x372078u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x37207c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x37207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_372080:
    // 0x372080: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x372080u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x372084: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x372084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x372088: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x372088u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37208c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37208cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372090: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x372090u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x372094: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x372094u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372098: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37209c: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x37209cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3720a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3720a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3720a4: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3720a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3720a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3720a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3720ac: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3720acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3720b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3720b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3720b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3720b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3720b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3720b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3720bc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3720bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x3720c0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3720c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3720c4: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x3720c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x3720c8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3720c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3720cc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3720ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3720d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3720d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3720d4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3720d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x3720d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3720d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3720dc: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x3720dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x3720e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3720e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3720e4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3720e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3720e8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3720e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x3720ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3720ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3720f0: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x3720f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x3720f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3720f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3720f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3720f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3720fc: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3720FCu;
    {
        const bool branch_taken_0x3720fc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720FCu;
        // 0x372100: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3720fc) {
            ctx->pc = 0x372120u;
            goto label_372120;
        }
    }
    ctx->pc = 0x372104u;
    // 0x372104: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x372104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x372108: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x37210c: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x37210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372110: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372110u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372114u;
    {
        const bool branch_taken_0x372114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372114u;
        // 0x372118: 0xad6200b8  sw          $v0, 0xB8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372114) {
            ctx->pc = 0x372128u;
            goto label_372128;
        }
    }
    ctx->pc = 0x37211Cu;
    // 0x37211c: 0x0  nop
    ctx->pc = 0x37211cu;
    // NOP
label_372120:
    // 0x372120: 0xad6900b8  sw          $t1, 0xB8($t3)
    ctx->pc = 0x372120u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 9));
    // 0x372124: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_372128:
    // 0x372128: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x372128u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37212c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37212cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372130: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372134: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372138: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372138u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x37213c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x37213cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372140: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372144: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x372144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x372148: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37214c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37214cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372150: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x372150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372154: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372158: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x37215c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37215cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372160: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372160u;
    {
        const bool branch_taken_0x372160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372160u;
        // 0x372164: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372160) {
            ctx->pc = 0x3721D8u;
            goto label_3721d8;
        }
    }
    ctx->pc = 0x372168u;
    // 0x372168: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x372168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x37216c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x37216Cu;
    {
        const bool branch_taken_0x37216c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37216Cu;
        // 0x372170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37216c) {
            ctx->pc = 0x372190u;
            goto label_372190;
        }
    }
    ctx->pc = 0x372174u;
    // 0x372174: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372178: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372178u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x37217c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x37217cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372180: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x372180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372184: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372184u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372188u;
    {
        const bool branch_taken_0x372188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372188u;
        // 0x37218c: 0xad6300bc  sw          $v1, 0xBC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372188) {
            ctx->pc = 0x37219Cu;
            goto label_37219c;
        }
    }
    ctx->pc = 0x372190u;
label_372190:
    // 0x372190: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x372190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372194: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372198: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x372198u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
label_37219c:
    // 0x37219c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x37219cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3721a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3721a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3721a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3721a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3721a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3721a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3721ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3721acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3721b0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3721b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3721b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3721b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3721b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3721b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3721bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3721bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3721c0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3721c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3721c4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3721c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3721c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3721c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3721cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3721ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3721d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3721D0u;
    {
        const bool branch_taken_0x3721d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721D0u;
        // 0x3721d4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721d0) {
            ctx->pc = 0x3721E8u;
            goto label_3721e8;
        }
    }
    ctx->pc = 0x3721D8u;
label_3721d8:
    // 0x3721d8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x3721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3721dc: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x3721dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3721e0: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x3721e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
    // 0x3721e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3721e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3721e8:
    // 0x3721e8: 0x2942001b  slti        $v0, $t2, 0x1B
    ctx->pc = 0x3721e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x3721ec: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3721ECu;
    {
        const bool branch_taken_0x3721ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3721F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721ECu;
        // 0x3721f0: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721ec) {
            ctx->pc = 0x372268u;
            goto label_372268;
        }
    }
    ctx->pc = 0x3721F4u;
    // 0x3721f4: 0x254affe5  addiu       $t2, $t2, -0x1B
    ctx->pc = 0x3721f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967269));
    // 0x3721f8: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3721F8u;
    {
        const bool branch_taken_0x3721f8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721F8u;
        // 0x3721fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721f8) {
            ctx->pc = 0x372220u;
            goto label_372220;
        }
    }
    ctx->pc = 0x372200u;
    // 0x372200: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372204: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372208: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372208u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x37220c: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x37220cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x372210: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372210u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372214: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x372214u;
    {
        const bool branch_taken_0x372214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372214u;
        // 0x372218: 0xad6300c0  sw          $v1, 0xC0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372214) {
            ctx->pc = 0x37222Cu;
            goto label_37222c;
        }
    }
    ctx->pc = 0x37221Cu;
    // 0x37221c: 0x0  nop
    ctx->pc = 0x37221cu;
    // NOP
label_372220:
    // 0x372220: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x372220u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x372224: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372228: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x372228u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
label_37222c:
    // 0x37222c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x37222cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372234: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37223c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37223cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372240: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372244: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37224c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37224cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372250: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372254: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372258: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37225c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37225cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372260u;
    {
        const bool branch_taken_0x372260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372260u;
        // 0x372264: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372260) {
            ctx->pc = 0x372274u;
            goto label_372274;
        }
    }
    ctx->pc = 0x372268u;
label_372268:
    // 0x372268: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x372268u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x37226c: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x37226cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
    // 0x372270: 0x254a0005  addiu       $t2, $t2, 0x5
    ctx->pc = 0x372270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
label_372274:
    // 0x372274: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x372274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x372278: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372278u;
    {
        const bool branch_taken_0x372278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372278u;
        // 0x37227c: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372278) {
            ctx->pc = 0x3722F0u;
            goto label_3722f0;
        }
    }
    ctx->pc = 0x372280u;
    // 0x372280: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x372280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x372284: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x372284u;
    {
        const bool branch_taken_0x372284 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372284u;
        // 0x372288: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372284) {
            ctx->pc = 0x3722A8u;
            goto label_3722a8;
        }
    }
    ctx->pc = 0x37228Cu;
    // 0x37228c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x37228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372290: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372294: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372298: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x372298u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x37229c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x37229cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x3722a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3722A0u;
    {
        const bool branch_taken_0x3722a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722A0u;
        // 0x3722a4: 0xad6300c4  sw          $v1, 0xC4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722a0) {
            ctx->pc = 0x3722B4u;
            goto label_3722b4;
        }
    }
    ctx->pc = 0x3722A8u;
label_3722a8:
    // 0x3722a8: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x3722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x3722ac: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3722acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722b0: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x3722b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
label_3722b4:
    // 0x3722b4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3722b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3722b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3722b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3722bc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3722bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3722c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3722c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3722c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3722c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3722c8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3722c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3722cc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3722ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3722d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3722d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3722d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3722d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3722d8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3722d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3722dc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3722dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3722e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3722e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3722e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3722e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3722e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3722E8u;
    {
        const bool branch_taken_0x3722e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3722ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722E8u;
        // 0x3722ec: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722e8) {
            ctx->pc = 0x3722FCu;
            goto label_3722fc;
        }
    }
    ctx->pc = 0x3722F0u;
label_3722f0:
    // 0x3722f0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x3722f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x3722f4: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x3722f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
    // 0x3722f8: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x3722f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_3722fc:
    // 0x3722fc: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x3722fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x372300: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372300u;
    {
        const bool branch_taken_0x372300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372300u;
        // 0x372304: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372300) {
            ctx->pc = 0x372378u;
            goto label_372378;
        }
    }
    ctx->pc = 0x372308u;
    // 0x372308: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x372308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x37230c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x37230Cu;
    {
        const bool branch_taken_0x37230c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37230Cu;
        // 0x372310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37230c) {
            ctx->pc = 0x372330u;
            goto label_372330;
        }
    }
    ctx->pc = 0x372314u;
    // 0x372314: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372318: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x37231c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x37231cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372320: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x372320u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372324: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372324u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372328: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372328u;
    {
        const bool branch_taken_0x372328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372328u;
        // 0x37232c: 0xad630018  sw          $v1, 0x18($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372328) {
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x372330u;
label_372330:
    // 0x372330: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x372330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372334: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372338: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x372338u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
label_37233c:
    // 0x37233c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x37233cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372344: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372348: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37234c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37234cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372350: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372354: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372358: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37235c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37235cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372360: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372364: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372368: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37236c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37236cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372370u;
    {
        const bool branch_taken_0x372370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372370u;
        // 0x372374: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372370) {
            ctx->pc = 0x372384u;
            goto label_372384;
        }
    }
    ctx->pc = 0x372378u;
label_372378:
    // 0x372378: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x372378u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x37237c: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x37237cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
    // 0x372380: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x372380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_372384:
    // 0x372384: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x372384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x372388: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372388u;
    {
        const bool branch_taken_0x372388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372388u;
        // 0x37238c: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372388) {
            ctx->pc = 0x372400u;
            goto label_372400;
        }
    }
    ctx->pc = 0x372390u;
    // 0x372390: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x372390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x372394: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x372394u;
    {
        const bool branch_taken_0x372394 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372394u;
        // 0x372398: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372394) {
            ctx->pc = 0x3723B8u;
            goto label_3723b8;
        }
    }
    ctx->pc = 0x37239Cu;
    // 0x37239c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x37239cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3723a0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3723a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3723a4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3723a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3723a8: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x3723a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x3723ac: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x3723acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x3723b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3723B0u;
    {
        const bool branch_taken_0x3723b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723B0u;
        // 0x3723b4: 0xad6300c8  sw          $v1, 0xC8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723b0) {
            ctx->pc = 0x3723C4u;
            goto label_3723c4;
        }
    }
    ctx->pc = 0x3723B8u;
label_3723b8:
    // 0x3723b8: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x3723b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x3723bc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3723bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723c0: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x3723c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
label_3723c4:
    // 0x3723c4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3723c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3723c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3723c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3723cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3723ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3723d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3723d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3723d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3723d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3723d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3723d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3723dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3723dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3723e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3723e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3723e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3723e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3723e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3723e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3723ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3723ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3723f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3723f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3723f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3723f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3723f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3723F8u;
    {
        const bool branch_taken_0x3723f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723F8u;
        // 0x3723fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723f8) {
            ctx->pc = 0x37240Cu;
            goto label_37240c;
        }
    }
    ctx->pc = 0x372400u;
label_372400:
    // 0x372400: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x372400u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x372404: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x372404u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
    // 0x372408: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x372408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_37240c:
    // 0x37240c: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x37240cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x372410: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372410u;
    {
        const bool branch_taken_0x372410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372410u;
        // 0x372414: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372410) {
            ctx->pc = 0x372488u;
            goto label_372488;
        }
    }
    ctx->pc = 0x372418u;
    // 0x372418: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x372418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x37241c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x37241Cu;
    {
        const bool branch_taken_0x37241c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x372420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37241Cu;
        // 0x372420: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37241c) {
            ctx->pc = 0x372440u;
            goto label_372440;
        }
    }
    ctx->pc = 0x372424u;
    // 0x372424: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x372428: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x372428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x37242c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x37242cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372430: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x372430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x372434: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x372434u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x372438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372438u;
    {
        const bool branch_taken_0x372438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372438u;
        // 0x37243c: 0xad6300cc  sw          $v1, 0xCC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372438) {
            ctx->pc = 0x37244Cu;
            goto label_37244c;
        }
    }
    ctx->pc = 0x372440u;
label_372440:
    // 0x372440: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x372440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x372444: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x372444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372448: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x372448u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
label_37244c:
    // 0x37244c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x37244cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372450: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372454: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372458: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37245c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37245cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372460: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x372460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372464: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x372464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372468: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37246c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37246cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372470: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x372470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x372474: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x372474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37247c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x37247cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372480u;
    {
        const bool branch_taken_0x372480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372480u;
        // 0x372484: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372480) {
            ctx->pc = 0x372494u;
            goto label_372494;
        }
    }
    ctx->pc = 0x372488u;
label_372488:
    // 0x372488: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x372488u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x37248c: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x37248cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
    // 0x372490: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x372490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_372494:
    // 0x372494: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x372494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x372498: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372498u;
    {
        const bool branch_taken_0x372498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372498u;
        // 0x37249c: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372498) {
            ctx->pc = 0x372510u;
            goto label_372510;
        }
    }
    ctx->pc = 0x3724A0u;
    // 0x3724a0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x3724a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x3724a4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3724A4u;
    {
        const bool branch_taken_0x3724a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3724A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724A4u;
        // 0x3724a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3724a4) {
            ctx->pc = 0x3724C8u;
            goto label_3724c8;
        }
    }
    ctx->pc = 0x3724ACu;
    // 0x3724ac: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x3724acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3724b0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3724b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3724b4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3724b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3724b8: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x3724b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3724bc: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x3724bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x3724c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3724C0u;
    {
        const bool branch_taken_0x3724c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724C0u;
        // 0x3724c4: 0xad6300d0  sw          $v1, 0xD0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3724c0) {
            ctx->pc = 0x3724D4u;
            goto label_3724d4;
        }
    }
    ctx->pc = 0x3724C8u;
label_3724c8:
    // 0x3724c8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x3724c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3724cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3724ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724d0: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x3724d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
label_3724d4:
    // 0x3724d4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3724d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3724d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3724d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3724dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3724dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3724e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3724e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3724e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3724e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3724e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3724e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3724ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3724ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3724f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3724f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3724f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3724f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3724f8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3724f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3724fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3724fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x372500: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x372504: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x372504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x372508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372508u;
    {
        const bool branch_taken_0x372508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372508u;
        // 0x37250c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372508) {
            ctx->pc = 0x37251Cu;
            goto label_37251c;
        }
    }
    ctx->pc = 0x372510u;
label_372510:
    // 0x372510: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x372510u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x372514: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x372514u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
    // 0x372518: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x372518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_37251c:
    // 0x37251c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x37251cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x372520: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x372520u;
    {
        const bool branch_taken_0x372520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372520) {
            ctx->pc = 0x372524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372520u;
            // 0x372524: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372560u;
            goto label_372560;
        }
    }
    ctx->pc = 0x372528u;
    // 0x372528: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x372528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x37252c: 0x51400008  beql        $t2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37252Cu;
    {
        const bool branch_taken_0x37252c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x37252c) {
            ctx->pc = 0x372530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37252Cu;
            // 0x372530: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372550u;
            goto label_372550;
        }
    }
    ctx->pc = 0x372534u;
    // 0x372534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372538: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x372538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x37253c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x37253cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x372540: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x372540u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x372544: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x372544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x372548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372548u;
    {
        const bool branch_taken_0x372548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372548u;
        // 0x37254c: 0xad6300d4  sw          $v1, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372548) {
            ctx->pc = 0x372554u;
            goto label_372554;
        }
    }
    ctx->pc = 0x372550u;
label_372550:
    // 0x372550: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x372550u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_372554:
    // 0x372554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372554u;
    {
        const bool branch_taken_0x372554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372554u;
        // 0x372558: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372554) {
            ctx->pc = 0x372568u;
            goto label_372568;
        }
    }
    ctx->pc = 0x37255Cu;
    // 0x37255c: 0x0  nop
    ctx->pc = 0x37255cu;
    // NOP
label_372560:
    // 0x372560: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x372560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x372564: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x372564u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_372568:
    // 0x372568: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x372568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x37256c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x37256cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x372570: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x372570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x372574: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x372574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x372578: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x372578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x37257c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x37257cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x372580: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x372580u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x372584: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x372584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x372588: 0x3e00008  jr          $ra
    ctx->pc = 0x372588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372588u;
        // 0x37258c: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372590u;
}
