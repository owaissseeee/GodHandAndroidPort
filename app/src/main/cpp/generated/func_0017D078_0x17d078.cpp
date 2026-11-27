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

// Function: func_0017D078
// Address: 0x17d078 - 0x17d280
void func_0017D078_0x17d078(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D078_0x17d078");
#endif

    if (__builtin_expect(ctx->pc != 0x17d078u, 0)) {
        switch (ctx->pc) {
            case 0x17d0a4u: goto label_17d0a4;
            case 0x17d0b8u: goto label_17d0b8;
            case 0x17d0c8u: goto label_17d0c8;
            case 0x17d0d8u: goto label_17d0d8;
            case 0x17d0e8u: goto label_17d0e8;
            case 0x17d120u: goto label_17d120;
            case 0x17d1d0u: goto label_17d1d0;
            case 0x17d238u: goto label_17d238;
            case 0x17d248u: goto label_17d248;
            default: break;
        }
    }


    // 0x17d078: 0x27bdff90  addiu       $sp, $sp, -0x70
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17d07c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17d080: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17d084: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d088: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17d08c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d090: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x17d094: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D094u;
    {
        const bool branch_taken_0x17d094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d094) {
            ctx->pc = 0x17D098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D094u;
            // 0x17d098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D0A8u;
            goto label_17d0a8;
        }
    }
    // 0x17d09c: 0xc07f59a  jal         func_1FD668
    SET_GPR_U32(ctx, 31, 0x17D0A4u);
    ctx->pc = 0x17D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D09Cu;
    // 0x17d0a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cDamageUnit_SetDamageCollActive_0x1fd668, 0x1fd668u, 0x17d0a4u)) {
        return;
    }
label_17d0a4:
    // 0x17d0a4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d0a8:
    // 0x17d0a8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0ac: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0b0: 0xc06dca0  jal         func_1B7280
    SET_GPR_U32(ctx, 31, 0x17D0B8u);
    ctx->pc = 0x17D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0B0u;
    // 0x17d0b4: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cOmBase_setMeshDispFromLayer_0x1b7280, 0x1b7280u, 0x17d0b8u)) {
        return;
    }
label_17d0b8:
    // 0x17d0b8: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0bc: 0x24050040  addiu       $a1, $zero, 0x40
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17d0c0: 0xc06dca0  jal         func_1B7280
    SET_GPR_U32(ctx, 31, 0x17D0C8u);
    ctx->pc = 0x17D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0C0u;
    // 0x17d0c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cOmBase_setMeshDispFromLayer_0x1b7280, 0x1b7280u, 0x17d0c8u)) {
        return;
    }
label_17d0c8:
    // 0x17d0c8: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0cc: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0d0: 0xc06dcc0  jal         func_1B7300
    SET_GPR_U32(ctx, 31, 0x17D0D8u);
    ctx->pc = 0x17D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0D0u;
    // 0x17d0d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField380Bit2000ForTag_1B7300_0x1b7300, 0x1b7300u, 0x17d0d8u)) {
        return;
    }
label_17d0d8:
    // 0x17d0d8: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0dc: 0x24050040  addiu       $a1, $zero, 0x40
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17d0e0: 0xc06dcc0  jal         func_1B7300
    SET_GPR_U32(ctx, 31, 0x17D0E8u);
    ctx->pc = 0x17D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0E0u;
    // 0x17d0e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField380Bit2000ForTag_1B7300_0x1b7300, 0x1b7300u, 0x17d0e8u)) {
        return;
    }
label_17d0e8:
    // 0x17d0e8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x17d0ec: 0x3c030001  lui         $v1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x17d0f0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x17d0f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17d0f4: 0x27b20020  addiu       $s2, $sp, 0x20
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d0f8: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d0fc: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d100: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x17D100u;
    {
        const bool branch_taken_0x17d100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x17D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D100u;
        // 0x17d104: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d100) {
            ctx->pc = 0x17D1C8u;
            goto label_17d1c8;
        }
    }
    // 0x17d108: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d10c: 0x240afff7  addiu       $t2, $zero, -0x9
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d110: 0x2409ffef  addiu       $t1, $zero, -0x11
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x17d114: 0x24070001  addiu       $a3, $zero, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d118: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x17d118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17d11c: 0x0  nop
    // NOP
label_17d120:
    // 0x17d120: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d124: 0xe8102a  slt         $v0, $a3, $t0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x17d128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D128u;
    {
        const bool branch_taken_0x17d128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D128u;
        // 0x17d12c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d128) {
            ctx->pc = 0x17D138u;
            goto label_17d138;
        }
    }
    // 0x17d130: 0xa3102a  slt         $v0, $a1, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d134: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d138:
    // 0x17d138: 0x308200ff  andi        $v0, $a0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17d13c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D13Cu;
    {
        const bool branch_taken_0x17d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D13Cu;
        // 0x17d140: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d13c) {
            ctx->pc = 0x17D154u;
            goto label_17d154;
        }
    }
    // 0x17d144: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17d148: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d14c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D14Cu;
    {
        const bool branch_taken_0x17d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D14Cu;
        // 0x17d150: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d14c) {
            ctx->pc = 0x17D158u;
            goto label_17d158;
        }
    }
label_17d154:
    // 0x17d154: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d158:
    // 0x17d158: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17d15c: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d160: 0xe8182a  slt         $v1, $a3, $t0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x17d164: 0x4a1024  and         $v0, $v0, $t2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x17d168: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x17d168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x17d16c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17d16cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17d170: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D170u;
    {
        const bool branch_taken_0x17d170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D170u;
        // 0x17d174: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d170) {
            ctx->pc = 0x17D180u;
            goto label_17d180;
        }
    }
    // 0x17d178: 0xa2102a  slt         $v0, $a1, $v0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d17c: 0x40302d  daddu       $a2, $v0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d180:
    // 0x17d180: 0x30c200ff  andi        $v0, $a2, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17d184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D184u;
    {
        const bool branch_taken_0x17d184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D184u;
        // 0x17d188: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d184) {
            ctx->pc = 0x17D19Cu;
            goto label_17d19c;
        }
    }
    // 0x17d18c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17d190: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D194u;
    {
        const bool branch_taken_0x17d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D194u;
        // 0x17d198: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d194) {
            ctx->pc = 0x17D1A0u;
            goto label_17d1a0;
        }
    }
label_17d19c:
    // 0x17d19c: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d1a0:
    // 0x17d1a0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17d1a4: 0x24a50001  addiu       $a1, $a1, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17d1a8: 0x24e70001  addiu       $a3, $a3, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17d1ac: 0x28a30006  slti        $v1, $a1, 0x6
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17d1b0: 0x491024  and         $v0, $v0, $t1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x17d1b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D1B4u;
    {
        const bool branch_taken_0x17d1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1B4u;
        // 0x17d1b8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1b4) {
            ctx->pc = 0x17D1C8u;
            goto label_17d1c8;
        }
    }
    // 0x17d1bc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17d1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17d1c0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x17D1C0u;
    {
        const bool branch_taken_0x17d1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x17d1c0) {
            ctx->pc = 0x17D1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D1C0u;
            // 0x17d1c4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d120;
        }
    }
label_17d1c8:
    // 0x17d1c8: 0xc0527ae  jal         func_149EB8
    SET_GPR_U32(ctx, 31, 0x17D1D0u);
    ctx->pc = 0x17D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1C8u;
    // 0x17d1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cModel_calcParts_0x149eb8, 0x149eb8u, 0x17d1d0u)) {
        return;
    }
label_17d1d0:
    // 0x17d1d0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17d1d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d1d4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d1d8: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d1dc: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d1e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17d1e4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x17d1e8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17d1ec: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x17d1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x17d1f0: 0x3c013c23  lui         $at, 0x3C23
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17d1f4: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17d1f8: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1fc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17d1fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d200: 0x44080000  mfc1        $t0, $f0
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17d204: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17d208: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17d20c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d210: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d214: 0x24100001  addiu       $s0, $zero, 0x1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d218: 0x3c013dcc  lui         $at, 0x3DCC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17d21c: 0x3421cccc  ori         $at, $at, 0xCCCC
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x17d220: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d224: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17d224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17d228: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d22c: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D22Cu;
    {
        const bool branch_taken_0x17d22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x17D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D22Cu;
        // 0x17d230: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d22c) {
            ctx->pc = 0x17D264u;
            goto label_17d264;
        }
    }
    // 0x17d234: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d238:
    // 0x17d238: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d23c: 0x27a60010  addiu       $a2, $sp, 0x10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d240: 0xc05f38e  jal         func_17CE38
    SET_GPR_U32(ctx, 31, 0x17D248u);
    ctx->pc = 0x17D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D240u;
    // 0x17d244: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0017CE38_0x17ce38, 0x17ce38u, 0x17d248u)) {
        return;
    }
label_17d248:
    // 0x17d248: 0x26100001  addiu       $s0, $s0, 0x1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17d24c: 0x2a020006  slti        $v0, $s0, 0x6
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17d250: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D250u;
    {
        const bool branch_taken_0x17d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d250) {
            ctx->pc = 0x17D254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D250u;
            // 0x17d254: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D268u;
            goto label_17d268;
        }
    }
    // 0x17d258: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17d258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17d25c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17D25Cu;
    {
        const bool branch_taken_0x17d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x17D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D25Cu;
        // 0x17d260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d25c) {
            ctx->pc = 0x17D238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d238;
        }
    }
label_17d264:
    // 0x17d264: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17d264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17d268:
    // 0x17d268: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17d268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d26c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17d26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d270: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d274: 0x3e00008  jr          $ra
    ctx->pc = 0x17D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D274u;
        // 0x17d278: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x17d27c: 0x0  nop
    // NOP
    ctx->pc = 0x17d280u;
}