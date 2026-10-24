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

// Function: func_002ABDC0
// Address: 0x2abdc0 - 0x2ac048
void func_002ABDC0_0x2abdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ABDC0_0x2abdc0");
#endif

    ctx->pc = 0x2abdc0u;

    // 0x2abdc0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2abdc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdc4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2abdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2abdc8: 0x8ce8001c  lw          $t0, 0x1C($a3)
    ctx->pc = 0x2abdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2abdcc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2abdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2abdd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2abdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2abdd4: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2ABDD4u;
    {
        const bool branch_taken_0x2abdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDD4u;
        // 0x2abdd8: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdd4) {
            ctx->pc = 0x2AC040u;
            goto label_2ac040;
        }
    }
    ctx->pc = 0x2ABDDCu;
    // 0x2abddc: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2abddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2abde0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2abde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2abde4: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2ABDE4u;
    {
        const bool branch_taken_0x2abde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abde4) {
            ctx->pc = 0x2AC040u;
            goto label_2ac040;
        }
    }
    ctx->pc = 0x2ABDECu;
    // 0x2abdec: 0x8102005c  lb          $v0, 0x5C($t0)
    ctx->pc = 0x2abdecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x2abdf0: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2ABDF0u;
    {
        const bool branch_taken_0x2abdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abdf0) {
            ctx->pc = 0x2AC040u;
            goto label_2ac040;
        }
    }
    ctx->pc = 0x2ABDF8u;
    // 0x2abdf8: 0x91020069  lbu         $v0, 0x69($t0)
    ctx->pc = 0x2abdf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 105)));
    // 0x2abdfc: 0x94e400a0  lhu         $a0, 0xA0($a3)
    ctx->pc = 0x2abdfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x2abe00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABE00u;
    {
        const bool branch_taken_0x2abe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe00) {
            ctx->pc = 0x2ABE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE00u;
            // 0x2abe04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE08u;
            goto label_2abe08;
        }
    }
    ctx->pc = 0x2ABE08u;
label_2abe08:
    // 0x2abe08: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x2abe08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x2abe0c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2abe0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2abe10: 0x9103006b  lbu         $v1, 0x6B($t0)
    ctx->pc = 0x2abe10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 107)));
    // 0x2abe14: 0x2810  mfhi        $a1
    ctx->pc = 0x2abe14u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2abe18: 0x14a00081  bnez        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2ABE18u;
    {
        const bool branch_taken_0x2abe18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE18u;
        // 0x2abe1c: 0xc34818  mult        $t1, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe18) {
            ctx->pc = 0x2AC020u;
            goto label_2ac020;
        }
    }
    ctx->pc = 0x2ABE20u;
    // 0x2abe20: 0xa140001d  sb          $zero, 0x1D($t2)
    ctx->pc = 0x2abe20u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abe24: 0x1291818  mult        $v1, $t1, $t1
    ctx->pc = 0x2abe24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2abe28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2abe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe2c: 0x91020069  lbu         $v0, 0x69($t0)
    ctx->pc = 0x2abe2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 105)));
    // 0x2abe30: 0x94e500a0  lhu         $a1, 0xA0($a3)
    ctx->pc = 0x2abe30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x2abe34: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABE34u;
    {
        const bool branch_taken_0x2abe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe34) {
            ctx->pc = 0x2ABE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE34u;
            // 0x2abe38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE3Cu;
            goto label_2abe3c;
        }
    }
    ctx->pc = 0x2ABE3Cu;
label_2abe3c:
    // 0x2abe3c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2abe3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2abe40: 0x1012  mflo        $v0
    ctx->pc = 0x2abe40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2abe44: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2abe44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2abe48: 0x5010  mfhi        $t2
    ctx->pc = 0x2abe48u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2abe4c: 0x149102a  slt         $v0, $t2, $t1
    ctx->pc = 0x2abe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2abe50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABE50u;
    {
        const bool branch_taken_0x2abe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE50u;
        // 0x2abe54: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe50) {
            ctx->pc = 0x2ABE64u;
            goto label_2abe64;
        }
    }
    ctx->pc = 0x2ABE58u;
    // 0x2abe58: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x2abe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2abe5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2abe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2abe60: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x2abe60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2abe64:
    // 0x2abe64: 0x91030068  lbu         $v1, 0x68($t0)
    ctx->pc = 0x2abe64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x2abe68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abe6c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ABE6Cu;
    {
        const bool branch_taken_0x2abe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE6Cu;
        // 0x2abe70: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe6c) {
            ctx->pc = 0x2ABEA4u;
            goto label_2abea4;
        }
    }
    ctx->pc = 0x2ABE74u;
    // 0x2abe74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABE74u;
    {
        const bool branch_taken_0x2abe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE74u;
        // 0x2abe78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe74) {
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE7Cu;
    // 0x2abe7c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2ABE7Cu;
    {
        const bool branch_taken_0x2abe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe7c) {
            ctx->pc = 0x2ABE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE7Cu;
            // 0x2abe80: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABEB4u;
            goto label_2abeb4;
        }
    }
    ctx->pc = 0x2ABE84u;
    // 0x2abe84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ABE84u;
    {
        const bool branch_taken_0x2abe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE84u;
        // 0x2abe88: 0x9103006a  lbu         $v1, 0x6A($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe84) {
            ctx->pc = 0x2ABEB8u;
            goto label_2abeb8;
        }
    }
    ctx->pc = 0x2ABE8Cu;
label_2abe8c:
    // 0x2abe8c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABE8Cu;
    {
        const bool branch_taken_0x2abe8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE8Cu;
        // 0x2abe90: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe8c) {
            ctx->pc = 0x2ABEACu;
            goto label_2abeac;
        }
    }
    ctx->pc = 0x2ABE94u;
    // 0x2abe94: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABE94u;
    {
        const bool branch_taken_0x2abe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE94u;
        // 0x2abe98: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe94) {
            ctx->pc = 0x2ABEB0u;
            goto label_2abeb0;
        }
    }
    ctx->pc = 0x2ABE9Cu;
    // 0x2abe9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABE9Cu;
    {
        const bool branch_taken_0x2abe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE9Cu;
        // 0x2abea0: 0x9103006a  lbu         $v1, 0x6A($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe9c) {
            ctx->pc = 0x2ABEB8u;
            goto label_2abeb8;
        }
    }
    ctx->pc = 0x2ABEA4u;
label_2abea4:
    // 0x2abea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABEA4u;
    {
        const bool branch_taken_0x2abea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEA4u;
        // 0x2abea8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abea4) {
            ctx->pc = 0x2ABEB4u;
            goto label_2abeb4;
        }
    }
    ctx->pc = 0x2ABEACu;
label_2abeac:
    // 0x2abeac: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2abeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2abeb0:
    // 0x2abeb0: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x2abeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2abeb4:
    // 0x2abeb4: 0x9103006a  lbu         $v1, 0x6A($t0)
    ctx->pc = 0x2abeb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
label_2abeb8:
    // 0x2abeb8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2abeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2abebc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2abebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abec0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2abec0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2abec4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABEC4u;
    {
        const bool branch_taken_0x2abec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abec4) {
            ctx->pc = 0x2ABEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABEC4u;
            // 0x2abec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABECCu;
            goto label_2abecc;
        }
    }
    ctx->pc = 0x2ABECCu;
label_2abecc:
    // 0x2abecc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2abeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abed0: 0x0  nop
    ctx->pc = 0x2abed0u;
    // NOP
    // 0x2abed4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2abed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2abed8: 0x9102006b  lbu         $v0, 0x6B($t0)
    ctx->pc = 0x2abed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 107)));
    // 0x2abedc: 0x2010  mfhi        $a0
    ctx->pc = 0x2abedcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2abee0: 0x5812  mflo        $t3
    ctx->pc = 0x2abee0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x2abee4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2abee4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abee8: 0x0  nop
    ctx->pc = 0x2abee8u;
    // NOP
    // 0x2abeec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abef0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2abef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2abef4: 0x162001a  div         $zero, $t3, $v0
    ctx->pc = 0x2abef4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2abef8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2abef8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abefc: 0x0  nop
    ctx->pc = 0x2abefcu;
    // NOP
    // 0x2abf00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2abf00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2abf04: 0x0  nop
    ctx->pc = 0x2abf04u;
    // NOP
    // 0x2abf08: 0x0  nop
    ctx->pc = 0x2abf08u;
    // NOP
    // 0x2abf0c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2abf0cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2abf10: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x2abf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    // 0x2abf14: 0x9102006a  lbu         $v0, 0x6A($t0)
    ctx->pc = 0x2abf14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x2abf18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf1c: 0x0  nop
    ctx->pc = 0x2abf1cu;
    // NOP
    // 0x2abf20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abf20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abf24: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2abf24u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2abf28: 0xe4e10078  swc1        $f1, 0x78($a3)
    ctx->pc = 0x2abf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 120), bits); }
    // 0x2abf2c: 0x9102006b  lbu         $v0, 0x6B($t0)
    ctx->pc = 0x2abf2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 107)));
    // 0x2abf30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2abf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abf34: 0x0  nop
    ctx->pc = 0x2abf34u;
    // NOP
    // 0x2abf38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2abf38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2abf3c: 0x1810  mfhi        $v1
    ctx->pc = 0x2abf3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abf40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abf40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf44: 0x0  nop
    ctx->pc = 0x2abf44u;
    // NOP
    // 0x2abf48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abf48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abf4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2abf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2abf50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2abf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abf54: 0x0  nop
    ctx->pc = 0x2abf54u;
    // NOP
    // 0x2abf58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2abf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2abf5c: 0x0  nop
    ctx->pc = 0x2abf5cu;
    // NOP
    // 0x2abf60: 0x0  nop
    ctx->pc = 0x2abf60u;
    // NOP
    // 0x2abf64: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2abf64u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2abf68: 0xe4e00074  swc1        $f0, 0x74($a3)
    ctx->pc = 0x2abf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 116), bits); }
    // 0x2abf6c: 0x9102006b  lbu         $v0, 0x6B($t0)
    ctx->pc = 0x2abf6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 107)));
    // 0x2abf70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf74: 0x0  nop
    ctx->pc = 0x2abf74u;
    // NOP
    // 0x2abf78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abf78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abf7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2abf7cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2abf80: 0xe4e1007c  swc1        $f1, 0x7C($a3)
    ctx->pc = 0x2abf80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 124), bits); }
    // 0x2abf84: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2abf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2abf88: 0x91030068  lbu         $v1, 0x68($t0)
    ctx->pc = 0x2abf88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x2abf8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2abf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2abf90: 0x10660016  beq         $v1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ABF90u;
    {
        const bool branch_taken_0x2abf90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2ABF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF90u;
        // 0x2abf94: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf90) {
            ctx->pc = 0x2ABFECu;
            goto label_2abfec;
        }
    }
    ctx->pc = 0x2ABF98u;
    // 0x2abf98: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2abf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2abf9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABF9Cu;
    {
        const bool branch_taken_0x2abf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF9Cu;
        // 0x2abfa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf9c) {
            ctx->pc = 0x2ABFB4u;
            goto label_2abfb4;
        }
    }
    ctx->pc = 0x2ABFA4u;
    // 0x2abfa4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2ABFA4u;
    {
        const bool branch_taken_0x2abfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFA4u;
        // 0x2abfa8: 0x149102a  slt         $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfa4) {
            ctx->pc = 0x2ABFD0u;
            goto label_2abfd0;
        }
    }
    ctx->pc = 0x2ABFACu;
    // 0x2abfac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2ABFACu;
    {
        const bool branch_taken_0x2abfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFACu;
        // 0x2abfb0: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfac) {
            ctx->pc = 0x2AC024u;
            goto label_2ac024;
        }
    }
    ctx->pc = 0x2ABFB4u;
label_2abfb4:
    // 0x2abfb4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABFB4u;
    {
        const bool branch_taken_0x2abfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFB4u;
        // 0x2abfb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfb4) {
            ctx->pc = 0x2ABFCCu;
            goto label_2abfcc;
        }
    }
    ctx->pc = 0x2ABFBCu;
    // 0x2abfbc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ABFBCu;
    {
        const bool branch_taken_0x2abfbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFBCu;
        // 0x2abfc0: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfbc) {
            ctx->pc = 0x2ABFF0u;
            goto label_2abff0;
        }
    }
    ctx->pc = 0x2ABFC4u;
    // 0x2abfc4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2ABFC4u;
    {
        const bool branch_taken_0x2abfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFC4u;
        // 0x2abfc8: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfc4) {
            ctx->pc = 0x2AC024u;
            goto label_2ac024;
        }
    }
    ctx->pc = 0x2ABFCCu;
label_2abfcc:
    // 0x2abfcc: 0x149102a  slt         $v0, $t2, $t1
    ctx->pc = 0x2abfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2abfd0:
    // 0x2abfd0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ABFD0u;
    {
        const bool branch_taken_0x2abfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abfd0) {
            ctx->pc = 0x2ABFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABFD0u;
            // 0x2abfd4: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC024u;
            goto label_2ac024;
        }
    }
    ctx->pc = 0x2ABFD8u;
    // 0x2abfd8: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2abfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2abfdc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ABFDCu;
    {
        const bool branch_taken_0x2abfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFDCu;
        // 0x2abfe0: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfdc) {
            ctx->pc = 0x2AC014u;
            goto label_2ac014;
        }
    }
    ctx->pc = 0x2ABFE4u;
    // 0x2abfe4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2ABFE4u;
    {
        const bool branch_taken_0x2abfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFE4u;
        // 0x2abfe8: 0x34424000  ori         $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfe4) {
            ctx->pc = 0x2AC01Cu;
            goto label_2ac01c;
        }
    }
    ctx->pc = 0x2ABFECu;
label_2abfec:
    // 0x2abfec: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x2abfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_2abff0:
    // 0x2abff0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2abff4: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x2abff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2abff8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ABFF8u;
    {
        const bool branch_taken_0x2abff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abff8) {
            ctx->pc = 0x2ABFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABFF8u;
            // 0x2abffc: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC024u;
            goto label_2ac024;
        }
    }
    ctx->pc = 0x2AC000u;
    // 0x2ac000: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2ac000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2ac004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC004u;
    {
        const bool branch_taken_0x2ac004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC004u;
        // 0x2ac008: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac004) {
            ctx->pc = 0x2AC014u;
            goto label_2ac014;
        }
    }
    ctx->pc = 0x2AC00Cu;
    // 0x2ac00c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC00Cu;
    {
        const bool branch_taken_0x2ac00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC00Cu;
        // 0x2ac010: 0x34424000  ori         $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac00c) {
            ctx->pc = 0x2AC01Cu;
            goto label_2ac01c;
        }
    }
    ctx->pc = 0x2AC014u;
label_2ac014:
    // 0x2ac014: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2ac014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2ac018: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ac018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ac01c:
    // 0x2ac01c: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x2ac01cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
label_2ac020:
    // 0x2ac020: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2ac020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_2ac024:
    // 0x2ac024: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2ac024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2ac028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ac028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ac02c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC02Cu;
    {
        const bool branch_taken_0x2ac02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac02c) {
            ctx->pc = 0x2AC040u;
            goto label_2ac040;
        }
    }
    ctx->pc = 0x2AC034u;
    // 0x2ac034: 0x94e200a0  lhu         $v0, 0xA0($a3)
    ctx->pc = 0x2ac034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x2ac038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac03c: 0xa4e200a0  sh          $v0, 0xA0($a3)
    ctx->pc = 0x2ac03cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 160), (uint16_t)GPR_U32(ctx, 2));
label_2ac040:
    // 0x2ac040: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC048u;
}
