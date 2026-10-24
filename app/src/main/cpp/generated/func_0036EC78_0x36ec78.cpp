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

// Function: func_0036EC78
// Address: 0x36ec78 - 0x36ee90
void func_0036EC78_0x36ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036EC78_0x36ec78");
#endif

    switch (ctx->pc) {
        case 0x36edc8u: goto label_36edc8;
        case 0x36ee54u: goto label_36ee54;
        default: break;
    }

    ctx->pc = 0x36ec78u;

    // 0x36ec78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ec7c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x36ec7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36ec84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36ec84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ec8c: 0x25490160  addiu       $t1, $t2, 0x160
    ctx->pc = 0x36ec8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 352));
    // 0x36ec90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ec94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36ec98: 0x8d220434  lw          $v0, 0x434($t1)
    ctx->pc = 0x36ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1076)));
    // 0x36ec9c: 0x8d230308  lw          $v1, 0x308($t1)
    ctx->pc = 0x36ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 776)));
    // 0x36eca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eca4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36ECA4u;
    {
        const bool branch_taken_0x36eca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECA4u;
        // 0x36eca8: 0xad220434  sw          $v0, 0x434($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eca4) {
            ctx->pc = 0x36ECB8u;
            goto label_36ecb8;
        }
    }
    ctx->pc = 0x36ECACu;
    // 0x36ecac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x36ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36ecb0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36ECB0u;
    {
        const bool branch_taken_0x36ecb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36ecb0) {
            ctx->pc = 0x36ECB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36ECB0u;
            // 0x36ecb4: 0x8d220494  lw          $v0, 0x494($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36ECC8u;
            goto label_36ecc8;
        }
    }
    ctx->pc = 0x36ECB8u;
label_36ecb8:
    // 0x36ecb8: 0x8d22030c  lw          $v0, 0x30C($t1)
    ctx->pc = 0x36ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 780)));
    // 0x36ecbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36ECBCu;
    {
        const bool branch_taken_0x36ecbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECBCu;
        // 0x36ecc0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ecbc) {
            ctx->pc = 0x36ECD4u;
            goto label_36ecd4;
        }
    }
    ctx->pc = 0x36ECC4u;
    // 0x36ecc4: 0x8d220494  lw          $v0, 0x494($t1)
    ctx->pc = 0x36ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
label_36ecc8:
    // 0x36ecc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eccc: 0xad220494  sw          $v0, 0x494($t1)
    ctx->pc = 0x36ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1172), GPR_U32(ctx, 2));
    // 0x36ecd0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x36ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36ecd4:
    // 0x36ecd4: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x36ecd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x36ecd8: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x36ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x36ecdc: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x36ecdcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ece0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ece0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ece4: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x36ece4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36ece8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x36ece8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ecec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ececu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ecf0: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x36ecf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ecf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ecf8: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x36ecf8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ecfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ecfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed00: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36ed00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed08: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36ed08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed10: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36ed14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ed14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ed18: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x36ed18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x36ed1c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36ed1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36ed20: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36ed20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed28: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36ed28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36ed2c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ed2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ed30: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x36ed30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x36ed34: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36ed34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed38: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36ed38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36ed3c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36ed3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36ed40: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ed40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ed44: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x36ed44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x36ed48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed4c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36ed4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36ed50: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36ED50u;
    {
        const bool branch_taken_0x36ed50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ED50u;
        // 0x36ed54: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ed50) {
            ctx->pc = 0x36ED70u;
            goto label_36ed70;
        }
    }
    ctx->pc = 0x36ED58u;
    // 0x36ed58: 0x111023  negu        $v0, $s1
    ctx->pc = 0x36ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x36ed5c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36ed60: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x36ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36ed64: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36ed64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36ed68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36ED68u;
    {
        const bool branch_taken_0x36ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ED68u;
        // 0x36ed6c: 0xad220030  sw          $v0, 0x30($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ed68) {
            ctx->pc = 0x36ED78u;
            goto label_36ed78;
        }
    }
    ctx->pc = 0x36ED70u;
label_36ed70:
    // 0x36ed70: 0xad280030  sw          $t0, 0x30($t1)
    ctx->pc = 0x36ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 8));
    // 0x36ed74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36ed74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_36ed78:
    // 0x36ed78: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36ed78u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed80: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36ed80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed88: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ed88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ed8c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36ed8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ed90: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36ed90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36ed94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ed94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ed98: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ed98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ed9c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36ed9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36eda0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36eda0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36eda4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x36eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x36eda8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36eda8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36edac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36edacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36edb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36edb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36edb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36edb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x36edb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x36edbc: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x36edbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x36edc0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x36EDC0u;
    {
        const bool branch_taken_0x36edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDC0u;
        // 0x36edc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36edc0) {
            ctx->pc = 0x36EE14u;
            goto label_36ee14;
        }
    }
    ctx->pc = 0x36EDC8u;
label_36edc8:
    // 0x36edc8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x36edc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36edcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x36EDCCu;
    {
        const bool branch_taken_0x36edcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDCCu;
        // 0x36edd0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36edcc) {
            ctx->pc = 0x36EE14u;
            goto label_36ee14;
        }
    }
    ctx->pc = 0x36EDD4u;
    // 0x36edd4: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x36edd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x36edd8: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36edd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36eddc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36eddcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ede0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ede0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ede4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36ede4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ede8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ede8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36edec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36edecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36edf0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36edf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36edf4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36edf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36edf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36edf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36edfc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36edfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ee00: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36ee00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ee04: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36ee04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36ee08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ee08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36ee0c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ee10: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36ee10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36ee14:
    // 0x36ee14: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x36ee14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x36ee18: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x36EE18u;
    {
        const bool branch_taken_0x36ee18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ee18) {
            ctx->pc = 0x36EE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EE18u;
            // 0x36ee1c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EE48u;
            goto label_36ee48;
        }
    }
    ctx->pc = 0x36EE20u;
    // 0x36ee20: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x36ee20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x36ee24: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x36ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x36ee28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EE28u;
    {
        const bool branch_taken_0x36ee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE28u;
        // 0x36ee2c: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ee28) {
            ctx->pc = 0x36EE3Cu;
            goto label_36ee3c;
        }
    }
    ctx->pc = 0x36EE30u;
    // 0x36ee30: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x36ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x36ee34: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36ee38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36ee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36ee3c:
    // 0x36ee3c: 0x5465ffe2  bnel        $v1, $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x36EE3Cu;
    {
        const bool branch_taken_0x36ee3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x36ee3c) {
            ctx->pc = 0x36EE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EE3Cu;
            // 0x36ee40: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36edc8;
        }
    }
    ctx->pc = 0x36EE44u;
    // 0x36ee44: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x36ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_36ee48:
    // 0x36ee48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36ee48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee4c: 0xc0dbba4  jal         func_36EE90
    ctx->pc = 0x36EE4Cu;
    SET_GPR_U32(ctx, 31, 0x36EE54u);
    ctx->pc = 0x36EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE4Cu;
    // 0x36ee50: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EE90u, 0x36EE4Cu, 0x36EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE54u;
label_36ee54:
    // 0x36ee54: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x36ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x36ee58: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36ee5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ee60: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x36ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36ee64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36ee64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ee68: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x36ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x36ee6c: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x36ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x36ee70: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x36ee70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36ee74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ee74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ee78: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x36ee78u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x36ee7c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36ee7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36ee80: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x36ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36ee84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36ee84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ee88: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE88u;
        // 0x36ee8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE90u;
}
