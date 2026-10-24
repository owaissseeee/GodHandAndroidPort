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

// Function: func_00367DC0
// Address: 0x367dc0 - 0x368a28
void func_00367DC0_0x367dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00367DC0_0x367dc0");
#endif

    switch (ctx->pc) {
        case 0x368078u: goto label_368078;
        default: break;
    }

    ctx->pc = 0x367dc0u;

    // 0x367dc0: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x367dc0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dc4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x367dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x367dc8: 0x25820003  addiu       $v0, $t4, 0x3
    ctx->pc = 0x367dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x367dcc: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x367dccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dd0: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x367dd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x367dd4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x367dd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dd8: 0x1891823  subu        $v1, $t4, $t1
    ctx->pc = 0x367dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x367ddc: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x367ddcu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367de0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367de4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x367de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x367de8: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x367de8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367dec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367df0: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x367df0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367df4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367df8: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x367df8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367dfc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367e00: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x367e00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367e04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367e08: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367e0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367e10: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367e10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x367e14: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367e14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367e18: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x367e18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x367e1c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x367e1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367e20: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367e20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367e24: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367e24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x367e28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367e2c: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x367e2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x367e30: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367e30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367e34: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367e34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x367e38: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x367e38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x367e3c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367e40: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x367e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x367e44: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x367e44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x367e48: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367e48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367e4c: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x367e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x367e50: 0x248700a8  addiu       $a3, $a0, 0xA8
    ctx->pc = 0x367e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x367e54: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367e58: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x367e58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x367e5c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x367E5Cu;
    {
        const bool branch_taken_0x367e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E5Cu;
        // 0x367e60: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e5c) {
            ctx->pc = 0x367ED0u;
            goto label_367ed0;
        }
    }
    ctx->pc = 0x367E64u;
    // 0x367e64: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x367e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x367e68: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x367E68u;
    {
        const bool branch_taken_0x367e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x367E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E68u;
        // 0x367e6c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e68) {
            ctx->pc = 0x367E88u;
            goto label_367e88;
        }
    }
    ctx->pc = 0x367E70u;
    // 0x367e70: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x367e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x367e74: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x367e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x367e78: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x367e78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367e7c: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x367e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x367e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x367E80u;
    {
        const bool branch_taken_0x367e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E80u;
        // 0x367e84: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e80) {
            ctx->pc = 0x367E90u;
            goto label_367e90;
        }
    }
    ctx->pc = 0x367E88u;
label_367e88:
    // 0x367e88: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x367e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x367e8c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x367e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_367e90:
    // 0x367e90: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x367e90u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367e94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367e98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367e9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367ea0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367ea4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367ea8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367ea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367eac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367eb0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367eb4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367eb8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367ebc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367ec0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367ec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x367EC4u;
    {
        const bool branch_taken_0x367ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367EC4u;
        // 0x367ec8: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ec4) {
            ctx->pc = 0x367EDCu;
            goto label_367edc;
        }
    }
    ctx->pc = 0x367ECCu;
    // 0x367ecc: 0x0  nop
    ctx->pc = 0x367eccu;
    // NOP
label_367ed0:
    // 0x367ed0: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x367ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x367ed4: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x367ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x367ed8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x367ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_367edc:
    // 0x367edc: 0x24a3ff20  addiu       $v1, $a1, -0xE0
    ctx->pc = 0x367edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x367ee0: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x367ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x367ee4: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x367ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x367ee8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x367EE8u;
    {
        const bool branch_taken_0x367ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367EE8u;
        // 0x367eec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ee8) {
            ctx->pc = 0x367F40u;
            goto label_367f40;
        }
    }
    ctx->pc = 0x367EF0u;
    // 0x367ef0: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x367ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x367ef4: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x367ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x367ef8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x367EF8u;
    {
        const bool branch_taken_0x367ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367EF8u;
        // 0x367efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ef8) {
            ctx->pc = 0x367F40u;
            goto label_367f40;
        }
    }
    ctx->pc = 0x367F00u;
    // 0x367f00: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x367f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x367f04: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367F04u;
    {
        const bool branch_taken_0x367f04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x367F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F04u;
        // 0x367f08: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f04) {
            ctx->pc = 0x367F18u;
            goto label_367f18;
        }
    }
    ctx->pc = 0x367F0Cu;
    // 0x367f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x367f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367f10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x367F10u;
    {
        const bool branch_taken_0x367f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F10u;
        // 0x367f14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f10) {
            ctx->pc = 0x367F40u;
            goto label_367f40;
        }
    }
    ctx->pc = 0x367F18u;
label_367f18:
    // 0x367f18: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x367F18u;
    {
        const bool branch_taken_0x367f18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x367F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F18u;
        // 0x367f1c: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f18) {
            ctx->pc = 0x367F30u;
            goto label_367f30;
        }
    }
    ctx->pc = 0x367F20u;
    // 0x367f20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x367f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367f24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x367F24u;
    {
        const bool branch_taken_0x367f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F24u;
        // 0x367f28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f24) {
            ctx->pc = 0x367F40u;
            goto label_367f40;
        }
    }
    ctx->pc = 0x367F2Cu;
    // 0x367f2c: 0x0  nop
    ctx->pc = 0x367f2cu;
    // NOP
label_367f30:
    // 0x367f30: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x367F30u;
    {
        const bool branch_taken_0x367f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x367f30) {
            ctx->pc = 0x367F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367F30u;
            // 0x367f34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367F3Cu;
            goto label_367f3c;
        }
    }
    ctx->pc = 0x367F38u;
    // 0x367f38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x367f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_367f3c:
    // 0x367f3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x367f3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367f40:
    // 0x367f40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x367f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367f44: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x367f44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x367f48: 0x15620027  bne         $t3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x367F48u;
    {
        const bool branch_taken_0x367f48 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x367F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F48u;
        // 0x367f4c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f48) {
            ctx->pc = 0x367FE8u;
            goto label_367fe8;
        }
    }
    ctx->pc = 0x367F50u;
    // 0x367f50: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x367f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x367f54: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x367F54u;
    {
        const bool branch_taken_0x367f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F54u;
        // 0x367f58: 0xa1402  srl         $v0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f54) {
            ctx->pc = 0x367FD0u;
            goto label_367fd0;
        }
    }
    ctx->pc = 0x367F5Cu;
    // 0x367f5c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x367f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x367f60: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x367F60u;
    {
        const bool branch_taken_0x367f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x367F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F60u;
        // 0x367f64: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f60) {
            ctx->pc = 0x367F88u;
            goto label_367f88;
        }
    }
    ctx->pc = 0x367F68u;
    // 0x367f68: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x367f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x367f6c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x367f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x367f70: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x367f70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367f74: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x367f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x367f78: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x367f78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x367f7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x367F7Cu;
    {
        const bool branch_taken_0x367f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F7Cu;
        // 0x367f80: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f7c) {
            ctx->pc = 0x367F94u;
            goto label_367f94;
        }
    }
    ctx->pc = 0x367F84u;
    // 0x367f84: 0x0  nop
    ctx->pc = 0x367f84u;
    // NOP
label_367f88:
    // 0x367f88: 0xa1402  srl         $v0, $t2, 16
    ctx->pc = 0x367f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x367f8c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x367f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f90: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x367f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_367f94:
    // 0x367f94: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x367f94u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367f98: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367f9c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367fa0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367fa4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367fa8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x367fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367fac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x367facu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x367fb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367fb4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367fb8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x367fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x367fbc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x367fbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x367fc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367fc4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x367fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x367fc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x367FC8u;
    {
        const bool branch_taken_0x367fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FC8u;
        // 0x367fcc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367fc8) {
            ctx->pc = 0x367FDCu;
            goto label_367fdc;
        }
    }
    ctx->pc = 0x367FD0u;
label_367fd0:
    // 0x367fd0: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x367fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x367fd4: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x367fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x367fd8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x367fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_367fdc:
    // 0x367fdc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x367FDCu;
    {
        const bool branch_taken_0x367fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FDCu;
        // 0x367fe0: 0x240d0006  addiu       $t5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367fdc) {
            ctx->pc = 0x36804Cu;
            goto label_36804c;
        }
    }
    ctx->pc = 0x367FE4u;
    // 0x367fe4: 0x0  nop
    ctx->pc = 0x367fe4u;
    // NOP
label_367fe8:
    // 0x367fe8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x367FE8u;
    {
        const bool branch_taken_0x367fe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x367FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FE8u;
        // 0x367fec: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367fe8) {
            ctx->pc = 0x368008u;
            goto label_368008;
        }
    }
    ctx->pc = 0x367FF0u;
    // 0x367ff0: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x367ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x367ff4: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x367ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x367ff8: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x367ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x367ffc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x367FFCu;
    {
        const bool branch_taken_0x367ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FFCu;
        // 0x368000: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ffc) {
            ctx->pc = 0x368010u;
            goto label_368010;
        }
    }
    ctx->pc = 0x368004u;
    // 0x368004: 0x0  nop
    ctx->pc = 0x368004u;
    // NOP
label_368008:
    // 0x368008: 0xacea001c  sw          $t2, 0x1C($a3)
    ctx->pc = 0x368008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 10));
    // 0x36800c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x36800cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_368010:
    // 0x368010: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368010u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368014: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368018: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36801c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36801cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368020: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368020u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368024: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368028: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36802c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36802cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368030: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368034: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368038: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368038u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x36803c: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x36803cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x368040: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368044: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368048: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_36804c:
    // 0x36804c: 0x24a2ff42  addiu       $v0, $a1, -0xBE
    ctx->pc = 0x36804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x368050: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x368050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x368054: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x368054u;
    {
        const bool branch_taken_0x368054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368054) {
            ctx->pc = 0x368058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368054u;
            // 0x368058: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368070u;
            goto label_368070;
        }
    }
    ctx->pc = 0x36805Cu;
    // 0x36805c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x36805cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x368060: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x368060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x368064: 0x3e00008  jr          $ra
    ctx->pc = 0x368064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368064u;
        // 0x368068: 0xace20024  sw          $v0, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36806Cu;
    // 0x36806c: 0x0  nop
    ctx->pc = 0x36806cu;
    // NOP
label_368070:
    // 0x368070: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x368070u;
    {
        const bool branch_taken_0x368070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368070u;
        // 0x368074: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368070) {
            ctx->pc = 0x3680C8u;
            goto label_3680c8;
        }
    }
    ctx->pc = 0x368078u;
label_368078:
    // 0x368078: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x368078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36807c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x36807cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368080: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368080u;
    {
        const bool branch_taken_0x368080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368080) {
            ctx->pc = 0x368084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368080u;
            // 0x368084: 0xa5200  sll         $t2, $t2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3680C8u;
            goto label_3680c8;
        }
    }
    ctx->pc = 0x368088u;
    // 0x368088: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x36808c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x36808cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368090: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368090u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368094: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368098: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36809c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36809cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3680a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3680a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3680a4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3680a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3680a8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3680a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3680ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3680acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3680b0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3680b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3680b4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3680b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3680b8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3680b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3680bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3680bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3680c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3680c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3680c4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3680c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3680c8:
    // 0x3680c8: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x3680c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3680cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3680CCu;
    {
        const bool branch_taken_0x3680cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3680D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3680CCu;
        // 0x3680d0: 0xa1e02  srl         $v1, $t2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3680cc) {
            ctx->pc = 0x3680E0u;
            goto label_3680e0;
        }
    }
    ctx->pc = 0x3680D4u;
    // 0x3680d4: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x3680d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3680d8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3680d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3680dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3680dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3680e0:
    // 0x3680e0: 0x1064ffe5  beq         $v1, $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3680E0u;
    {
        const bool branch_taken_0x3680e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3680E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3680E0u;
        // 0x3680e4: 0x28c2001f  slti        $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3680e0) {
            ctx->pc = 0x368078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368078;
        }
    }
    ctx->pc = 0x3680E8u;
    // 0x3680e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3680E8u;
    {
        const bool branch_taken_0x3680e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3680ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3680E8u;
        // 0x3680ec: 0xa1f82  srl         $v1, $t2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3680e8) {
            ctx->pc = 0x368100u;
            goto label_368100;
        }
    }
    ctx->pc = 0x3680F0u;
    // 0x3680f0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x3680f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x3680f4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3680f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3680f8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3680f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3680fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3680fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_368100:
    // 0x368100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368104: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x368104u;
    {
        const bool branch_taken_0x368104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x368108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368104u;
        // 0x368108: 0x28c2001d  slti        $v0, $a2, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368104) {
            ctx->pc = 0x368244u;
            goto label_368244;
        }
    }
    ctx->pc = 0x36810Cu;
    // 0x36810c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x36810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x368110: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x368110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368114: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368114u;
    {
        const bool branch_taken_0x368114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368114) {
            ctx->pc = 0x368118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368114u;
            // 0x368118: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36815Cu;
            goto label_36815c;
        }
    }
    ctx->pc = 0x36811Cu;
    // 0x36811c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x36811cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x368120: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x368120u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368124: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368124u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368128: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368128u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36812c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36812cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368130: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368134: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368134u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368138: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36813c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36813cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368140: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368144: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368144u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368148: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36814c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x36814cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368150: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368154: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368154u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368158: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368158u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_36815c:
    // 0x36815c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x36815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x368160: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x368160u;
    {
        const bool branch_taken_0x368160 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x368164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368160u;
        // 0x368164: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368160) {
            ctx->pc = 0x3681B0u;
            goto label_3681b0;
        }
    }
    ctx->pc = 0x368168u;
    // 0x368168: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x368168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36816c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x36816cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368170: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368178: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36817c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36817cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368180: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368180u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368184: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368188: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368188u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36818c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36818cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368190: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368190u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368194: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368198: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x36819c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36819cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3681a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3681a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3681a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3681A4u;
    {
        const bool branch_taken_0x3681a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681A4u;
        // 0x3681a8: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681a4) {
            ctx->pc = 0x3681B8u;
            goto label_3681b8;
        }
    }
    ctx->pc = 0x3681ACu;
    // 0x3681ac: 0x0  nop
    ctx->pc = 0x3681acu;
    // NOP
label_3681b0:
    // 0x3681b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3681b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3681b4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x3681b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_3681b8:
    // 0x3681b8: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x3681b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x3681bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3681BCu;
    {
        const bool branch_taken_0x3681bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3681C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681BCu;
        // 0x3681c0: 0xa24c2  srl         $a0, $t2, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681bc) {
            ctx->pc = 0x368228u;
            goto label_368228;
        }
    }
    ctx->pc = 0x3681C4u;
    // 0x3681c4: 0x24c6ffed  addiu       $a2, $a2, -0x13
    ctx->pc = 0x3681c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
    // 0x3681c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3681C8u;
    {
        const bool branch_taken_0x3681c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3681CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681C8u;
        // 0x3681cc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681c8) {
            ctx->pc = 0x3681E8u;
            goto label_3681e8;
        }
    }
    ctx->pc = 0x3681D0u;
    // 0x3681d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3681d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3681d4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3681d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3681d8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3681d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3681dc: 0xa24c2  srl         $a0, $t2, 19
    ctx->pc = 0x3681dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
    // 0x3681e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3681E0u;
    {
        const bool branch_taken_0x3681e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3681E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681E0u;
        // 0x3681e4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681e0) {
            ctx->pc = 0x3681ECu;
            goto label_3681ec;
        }
    }
    ctx->pc = 0x3681E8u;
label_3681e8:
    // 0x3681e8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3681e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3681ec:
    // 0x3681ec: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3681ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3681f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3681f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3681f4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3681f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3681f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3681fc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3681fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368200: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368204: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368208: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36820c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36820cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368210: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368214: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368218: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36821c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36821cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368220u;
    {
        const bool branch_taken_0x368220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368220u;
        // 0x368224: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368220) {
            ctx->pc = 0x368230u;
            goto label_368230;
        }
    }
    ctx->pc = 0x368228u;
label_368228:
    // 0x368228: 0xa5340  sll         $t2, $t2, 13
    ctx->pc = 0x368228u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 13));
    // 0x36822c: 0x24c6000d  addiu       $a2, $a2, 0xD
    ctx->pc = 0x36822cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
label_368230:
    // 0x368230: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x368230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x368234: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x368234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x368238: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x368238u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x36823c: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x36823cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x368240: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x368240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
label_368244:
    // 0x368244: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x368244u;
    {
        const bool branch_taken_0x368244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368244u;
        // 0x368248: 0xa1f02  srl         $v1, $t2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368244) {
            ctx->pc = 0x36825Cu;
            goto label_36825c;
        }
    }
    ctx->pc = 0x36824Cu;
    // 0x36824c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x36824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x368250: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x368250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x368254: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x368254u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x368258: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x368258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36825c:
    // 0x36825c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368260: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x368260u;
    {
        const bool branch_taken_0x368260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x368264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368260u;
        // 0x368264: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368260) {
            ctx->pc = 0x3684B8u;
            goto label_3684b8;
        }
    }
    ctx->pc = 0x368268u;
    // 0x368268: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x368268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x36826c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x36826cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368270: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368270u;
    {
        const bool branch_taken_0x368270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368270) {
            ctx->pc = 0x368274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368270u;
            // 0x368274: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3682B8u;
            goto label_3682b8;
        }
    }
    ctx->pc = 0x368278u;
    // 0x368278: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x36827c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x36827cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368280: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368280u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368284: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368288: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36828c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36828cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368290: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368290u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368294: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368298: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36829c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36829cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3682a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3682a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3682a4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3682a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3682a8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3682a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3682ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3682acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3682b0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3682b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3682b4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3682b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3682b8:
    // 0x3682b8: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x3682b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x3682bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3682BCu;
    {
        const bool branch_taken_0x3682bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3682C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682BCu;
        // 0x3682c0: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682bc) {
            ctx->pc = 0x368328u;
            goto label_368328;
        }
    }
    ctx->pc = 0x3682C4u;
    // 0x3682c4: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x3682c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x3682c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3682C8u;
    {
        const bool branch_taken_0x3682c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3682CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682C8u;
        // 0x3682cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682c8) {
            ctx->pc = 0x3682E8u;
            goto label_3682e8;
        }
    }
    ctx->pc = 0x3682D0u;
    // 0x3682d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3682d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3682d4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3682d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3682d8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3682d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3682dc: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x3682dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x3682e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3682E0u;
    {
        const bool branch_taken_0x3682e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3682E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682E0u;
        // 0x3682e4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682e0) {
            ctx->pc = 0x3682ECu;
            goto label_3682ec;
        }
    }
    ctx->pc = 0x3682E8u;
label_3682e8:
    // 0x3682e8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3682e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3682ec:
    // 0x3682ec: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3682ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3682f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3682f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3682f4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3682f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3682f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3682f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3682fc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3682fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368300: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368304: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368304u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368308: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36830c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36830cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368310: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368314: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368314u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368318: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36831c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36831cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368320u;
    {
        const bool branch_taken_0x368320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368320u;
        // 0x368324: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368320) {
            ctx->pc = 0x368330u;
            goto label_368330;
        }
    }
    ctx->pc = 0x368328u;
label_368328:
    // 0x368328: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x368328u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36832c: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x36832cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_368330:
    // 0x368330: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x368330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368334: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x368334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368338: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368338u;
    {
        const bool branch_taken_0x368338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368338) {
            ctx->pc = 0x36833Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368338u;
            // 0x36833c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368380u;
            goto label_368380;
        }
    }
    ctx->pc = 0x368340u;
    // 0x368340: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x368344: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x368344u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368348: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368348u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36834c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36834cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368350: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368354: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368358: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368358u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36835c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x36835cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368360: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368360u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368364: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368368: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368368u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36836c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36836cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368370: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368374: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368378: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368378u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36837c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36837cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_368380:
    // 0x368380: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x368380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x368384: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x368384u;
    {
        const bool branch_taken_0x368384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368384u;
        // 0x368388: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368384) {
            ctx->pc = 0x3683F0u;
            goto label_3683f0;
        }
    }
    ctx->pc = 0x36838Cu;
    // 0x36838c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x36838cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x368390: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x368390u;
    {
        const bool branch_taken_0x368390 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x368394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368390u;
        // 0x368394: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368390) {
            ctx->pc = 0x3683B0u;
            goto label_3683b0;
        }
    }
    ctx->pc = 0x368398u;
    // 0x368398: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x368398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36839c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x36839cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3683a0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3683a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3683a4: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x3683a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x3683a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3683A8u;
    {
        const bool branch_taken_0x3683a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3683ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3683A8u;
        // 0x3683ac: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3683a8) {
            ctx->pc = 0x3683B4u;
            goto label_3683b4;
        }
    }
    ctx->pc = 0x3683B0u;
label_3683b0:
    // 0x3683b0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3683b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3683b4:
    // 0x3683b4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3683b4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3683b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3683b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3683bc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3683bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3683c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3683c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3683c4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3683c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3683c8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3683c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3683cc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3683ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3683d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3683d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3683d4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3683d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3683d8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3683d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3683dc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3683dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3683e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3683e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3683e4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3683e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3683e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3683E8u;
    {
        const bool branch_taken_0x3683e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3683ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3683E8u;
        // 0x3683ec: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3683e8) {
            ctx->pc = 0x3683F8u;
            goto label_3683f8;
        }
    }
    ctx->pc = 0x3683F0u;
label_3683f0:
    // 0x3683f0: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x3683f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x3683f4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x3683f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_3683f8:
    // 0x3683f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3683f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3683fc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3683fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368400: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368400u;
    {
        const bool branch_taken_0x368400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368400) {
            ctx->pc = 0x368404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368400u;
            // 0x368404: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368448u;
            goto label_368448;
        }
    }
    ctx->pc = 0x368408u;
    // 0x368408: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x36840c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x36840cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368410: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368410u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368414: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368418: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36841c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36841cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368420: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368420u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368424: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368428: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36842c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36842cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368430: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368430u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368434: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368438: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368438u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x36843c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36843cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368440: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368440u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368444: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_368448:
    // 0x368448: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x368448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x36844c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36844Cu;
    {
        const bool branch_taken_0x36844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36844Cu;
        // 0x368450: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36844c) {
            ctx->pc = 0x368478u;
            goto label_368478;
        }
    }
    ctx->pc = 0x368454u;
    // 0x368454: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x368454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x368458: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x368458u;
    {
        const bool branch_taken_0x368458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368458u;
        // 0x36845c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368458) {
            ctx->pc = 0x368470u;
            goto label_368470;
        }
    }
    ctx->pc = 0x368460u;
    // 0x368460: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x368460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x368464: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x368464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x368468: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x368468u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x36846c: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x36846cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_368470:
    // 0x368470: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368470u;
    {
        const bool branch_taken_0x368470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368470u;
        // 0x368474: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368470) {
            ctx->pc = 0x36847Cu;
            goto label_36847c;
        }
    }
    ctx->pc = 0x368478u;
label_368478:
    // 0x368478: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x368478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_36847c:
    // 0x36847c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36847cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368480: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x368480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368484: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368484u;
    {
        const bool branch_taken_0x368484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368484u;
        // 0x368488: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368484) {
            ctx->pc = 0x368494u;
            goto label_368494;
        }
    }
    ctx->pc = 0x36848Cu;
    // 0x36848c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x36848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x368490: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x368490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_368494:
    // 0x368494: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x368494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x368498: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x368498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x36849c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x36849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x3684a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3684a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3684a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3684a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3684a8: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x3684a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x3684ac: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x3684acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x3684b0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x3684B0u;
    {
        const bool branch_taken_0x3684b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684B0u;
        // 0x3684b4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684b0) {
            ctx->pc = 0x3689F8u;
            goto label_3689f8;
        }
    }
    ctx->pc = 0x3684B8u;
label_3684b8:
    // 0x3684b8: 0x54620149  bnel        $v1, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x3684B8u;
    {
        const bool branch_taken_0x3684b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3684b8) {
            ctx->pc = 0x3684BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3684B8u;
            // 0x3684bc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3689E0u;
            goto label_3689e0;
        }
    }
    ctx->pc = 0x3684C0u;
    // 0x3684c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3684c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3684c4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3684c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3684c8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3684C8u;
    {
        const bool branch_taken_0x3684c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3684c8) {
            ctx->pc = 0x3684CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3684C8u;
            // 0x3684cc: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368510u;
            goto label_368510;
        }
    }
    ctx->pc = 0x3684D0u;
    // 0x3684d0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3684d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3684d4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x3684d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3684d8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3684d8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3684dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3684dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3684e0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3684e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3684e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3684e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3684e8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3684e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3684ec: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3684ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3684f0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3684f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3684f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3684f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3684f8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3684f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3684fc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3684fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368500: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368504: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368508: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368508u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36850c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36850cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_368510:
    // 0x368510: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x368510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x368514: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x368514u;
    {
        const bool branch_taken_0x368514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368514u;
        // 0x368518: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368514) {
            ctx->pc = 0x368580u;
            goto label_368580;
        }
    }
    ctx->pc = 0x36851Cu;
    // 0x36851c: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x36851cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x368520: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x368520u;
    {
        const bool branch_taken_0x368520 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x368524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368520u;
        // 0x368524: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368520) {
            ctx->pc = 0x368540u;
            goto label_368540;
        }
    }
    ctx->pc = 0x368528u;
    // 0x368528: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x368528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36852c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x36852cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x368530: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x368530u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x368534: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x368534u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x368538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368538u;
    {
        const bool branch_taken_0x368538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368538u;
        // 0x36853c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368538) {
            ctx->pc = 0x368544u;
            goto label_368544;
        }
    }
    ctx->pc = 0x368540u;
label_368540:
    // 0x368540: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x368540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_368544:
    // 0x368544: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368544u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368548: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36854c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36854cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368550: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368554: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368558: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36855c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36855cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368560: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368564: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368564u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368568: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36856c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x36856cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368570: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368574: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368574u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368578u;
    {
        const bool branch_taken_0x368578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368578u;
        // 0x36857c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368578) {
            ctx->pc = 0x368588u;
            goto label_368588;
        }
    }
    ctx->pc = 0x368580u;
label_368580:
    // 0x368580: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x368580u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x368584: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x368584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_368588:
    // 0x368588: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x368588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36858c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x36858cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368590: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368590u;
    {
        const bool branch_taken_0x368590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368590) {
            ctx->pc = 0x368594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368590u;
            // 0x368594: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3685D8u;
            goto label_3685d8;
        }
    }
    ctx->pc = 0x368598u;
    // 0x368598: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x36859c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x36859cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3685a0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3685a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3685a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3685a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3685a8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3685a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3685ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3685acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3685b0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3685b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3685b4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3685b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3685b8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3685b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3685bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3685bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3685c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3685c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3685c4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3685c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3685c8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3685c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3685cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3685ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3685d0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3685d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3685d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3685d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3685d8:
    // 0x3685d8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3685d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3685dc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3685DCu;
    {
        const bool branch_taken_0x3685dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3685E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685DCu;
        // 0x3685e0: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685dc) {
            ctx->pc = 0x368648u;
            goto label_368648;
        }
    }
    ctx->pc = 0x3685E4u;
    // 0x3685e4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x3685e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x3685e8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3685E8u;
    {
        const bool branch_taken_0x3685e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3685ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685E8u;
        // 0x3685ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685e8) {
            ctx->pc = 0x368608u;
            goto label_368608;
        }
    }
    ctx->pc = 0x3685F0u;
    // 0x3685f0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3685f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3685f4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3685f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3685f8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3685f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3685fc: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x3685fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x368600: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368600u;
    {
        const bool branch_taken_0x368600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368600u;
        // 0x368604: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368600) {
            ctx->pc = 0x36860Cu;
            goto label_36860c;
        }
    }
    ctx->pc = 0x368608u;
label_368608:
    // 0x368608: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x368608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_36860c:
    // 0x36860c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x36860cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368610: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368614: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368618: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36861c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36861cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368620: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368624: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368624u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368628: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36862c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36862cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368630: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368634: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368638: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36863c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36863cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368640: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368640u;
    {
        const bool branch_taken_0x368640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368640u;
        // 0x368644: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368640) {
            ctx->pc = 0x368650u;
            goto label_368650;
        }
    }
    ctx->pc = 0x368648u;
label_368648:
    // 0x368648: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x368648u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x36864c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x36864cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_368650:
    // 0x368650: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x368650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368654: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x368654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368658: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368658u;
    {
        const bool branch_taken_0x368658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368658) {
            ctx->pc = 0x36865Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368658u;
            // 0x36865c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3686A0u;
            goto label_3686a0;
        }
    }
    ctx->pc = 0x368660u;
    // 0x368660: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x368664: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x368664u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368668: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368668u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36866c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36866cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368670: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368674: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368678: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368678u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36867c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x36867cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368680: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368680u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368684: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368688: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368688u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36868c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36868cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368690: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368694: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368698: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368698u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36869c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36869cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3686a0:
    // 0x3686a0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3686a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3686a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3686A4u;
    {
        const bool branch_taken_0x3686a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3686A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686A4u;
        // 0x3686a8: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686a4) {
            ctx->pc = 0x368710u;
            goto label_368710;
        }
    }
    ctx->pc = 0x3686ACu;
    // 0x3686ac: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x3686acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x3686b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3686B0u;
    {
        const bool branch_taken_0x3686b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3686B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686B0u;
        // 0x3686b4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686b0) {
            ctx->pc = 0x3686D0u;
            goto label_3686d0;
        }
    }
    ctx->pc = 0x3686B8u;
    // 0x3686b8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3686b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3686bc: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3686bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3686c0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3686c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3686c4: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x3686c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x3686c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3686C8u;
    {
        const bool branch_taken_0x3686c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3686CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686C8u;
        // 0x3686cc: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686c8) {
            ctx->pc = 0x3686D4u;
            goto label_3686d4;
        }
    }
    ctx->pc = 0x3686D0u;
label_3686d0:
    // 0x3686d0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3686d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3686d4:
    // 0x3686d4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3686d4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3686d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3686d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3686dc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3686dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3686e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3686e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3686e4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3686e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3686e8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3686e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3686ec: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3686ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3686f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3686f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3686f4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3686f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3686f8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3686f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3686fc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3686fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368700: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368704: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368704u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368708u;
    {
        const bool branch_taken_0x368708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368708u;
        // 0x36870c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368708) {
            ctx->pc = 0x368718u;
            goto label_368718;
        }
    }
    ctx->pc = 0x368710u;
label_368710:
    // 0x368710: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x368710u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x368714: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x368714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_368718:
    // 0x368718: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x368718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36871c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x36871cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368720: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368720u;
    {
        const bool branch_taken_0x368720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368720) {
            ctx->pc = 0x368724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368720u;
            // 0x368724: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368768u;
            goto label_368768;
        }
    }
    ctx->pc = 0x368728u;
    // 0x368728: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x36872c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x36872cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368730: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368730u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368734: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368738: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36873c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36873cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368740: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368740u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368744: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368748: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36874c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36874cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368750: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368754: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368758: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x36875c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36875cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368760: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368760u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368764: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_368768:
    // 0x368768: 0x31620007  andi        $v0, $t3, 0x7
    ctx->pc = 0x368768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x36876c: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x36876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x368770: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x368770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x368774: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x368774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x368778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x368778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36877c: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x36877cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x368780: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x368780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x368784: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x368784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x368788: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x368788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36878c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36878Cu;
    {
        const bool branch_taken_0x36878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36878Cu;
        // 0x368790: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36878c) {
            ctx->pc = 0x3687D8u;
            goto label_3687d8;
        }
    }
    ctx->pc = 0x368794u;
    // 0x368794: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x368798: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x368798u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x36879c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x36879cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3687a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3687a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3687a4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3687a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3687a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3687a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3687ac: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3687acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3687b0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3687b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3687b4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3687b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3687b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3687b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3687bc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3687bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3687c0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3687c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3687c4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3687c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3687c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3687c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3687cc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3687ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3687d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3687D0u;
    {
        const bool branch_taken_0x3687d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3687D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687D0u;
        // 0x3687d4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687d0) {
            ctx->pc = 0x3687DCu;
            goto label_3687dc;
        }
    }
    ctx->pc = 0x3687D8u;
label_3687d8:
    // 0x3687d8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x3687d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_3687dc:
    // 0x3687dc: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x3687dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x3687e0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3687E0u;
    {
        const bool branch_taken_0x3687e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3687E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687E0u;
        // 0x3687e4: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687e0) {
            ctx->pc = 0x368850u;
            goto label_368850;
        }
    }
    ctx->pc = 0x3687E8u;
    // 0x3687e8: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x3687e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x3687ec: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3687ECu;
    {
        const bool branch_taken_0x3687ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3687F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687ECu;
        // 0x3687f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687ec) {
            ctx->pc = 0x368810u;
            goto label_368810;
        }
    }
    ctx->pc = 0x3687F4u;
    // 0x3687f4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3687f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3687f8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3687f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3687fc: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3687fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x368800: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x368800u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x368804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368804u;
    {
        const bool branch_taken_0x368804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368804u;
        // 0x368808: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368804) {
            ctx->pc = 0x368814u;
            goto label_368814;
        }
    }
    ctx->pc = 0x36880Cu;
    // 0x36880c: 0x0  nop
    ctx->pc = 0x36880cu;
    // NOP
label_368810:
    // 0x368810: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x368810u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_368814:
    // 0x368814: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368814u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368818: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36881c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36881cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368820: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368824: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368824u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368828: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36882c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36882cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368830: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368834: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368838: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36883c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x36883cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368840: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368844: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368848u;
    {
        const bool branch_taken_0x368848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368848u;
        // 0x36884c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368848) {
            ctx->pc = 0x368858u;
            goto label_368858;
        }
    }
    ctx->pc = 0x368850u;
label_368850:
    // 0x368850: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x368850u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x368854: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x368854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_368858:
    // 0x368858: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x368858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36885c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x36885cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368860: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368860u;
    {
        const bool branch_taken_0x368860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368860) {
            ctx->pc = 0x368864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368860u;
            // 0x368864: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3688A8u;
            goto label_3688a8;
        }
    }
    ctx->pc = 0x368868u;
    // 0x368868: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x36886c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x36886cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368870: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368870u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368874: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368878: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36887c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36887cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368880: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368880u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368884: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x368884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368888: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36888c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36888cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368890: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368890u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368894: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368898: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x36889c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36889cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3688a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3688a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3688a4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3688a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3688a8:
    // 0x3688a8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3688a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3688ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3688ACu;
    {
        const bool branch_taken_0x3688ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3688B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688ACu;
        // 0x3688b0: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688ac) {
            ctx->pc = 0x368918u;
            goto label_368918;
        }
    }
    ctx->pc = 0x3688B4u;
    // 0x3688b4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x3688b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x3688b8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3688B8u;
    {
        const bool branch_taken_0x3688b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3688BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688B8u;
        // 0x3688bc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688b8) {
            ctx->pc = 0x3688D8u;
            goto label_3688d8;
        }
    }
    ctx->pc = 0x3688C0u;
    // 0x3688c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3688c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3688c4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x3688c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x3688c8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x3688c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3688cc: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x3688ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x3688d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3688D0u;
    {
        const bool branch_taken_0x3688d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3688D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688D0u;
        // 0x3688d4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688d0) {
            ctx->pc = 0x3688DCu;
            goto label_3688dc;
        }
    }
    ctx->pc = 0x3688D8u;
label_3688d8:
    // 0x3688d8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3688d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3688dc:
    // 0x3688dc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x3688dcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3688e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3688e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3688e4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3688e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3688e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3688e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3688ec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3688ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3688f0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3688f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3688f4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3688f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3688f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3688f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3688fc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x3688fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368900: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368904: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368908: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36890c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36890cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x368910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368910u;
    {
        const bool branch_taken_0x368910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368910u;
        // 0x368914: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368910) {
            ctx->pc = 0x368920u;
            goto label_368920;
        }
    }
    ctx->pc = 0x368918u;
label_368918:
    // 0x368918: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x368918u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x36891c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x36891cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_368920:
    // 0x368920: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x368920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368924: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x368924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x368928: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x368928u;
    {
        const bool branch_taken_0x368928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368928) {
            ctx->pc = 0x36892Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368928u;
            // 0x36892c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368970u;
            goto label_368970;
        }
    }
    ctx->pc = 0x368930u;
    // 0x368930: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x368930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x368934: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x368934u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x368938: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x368938u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36893c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36893cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368940: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x368940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368944: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368948: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368948u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36894c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x36894cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368950: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x368950u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x368954: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368958: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36895c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x36895cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368960: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x368960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x368964: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x368964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x368968: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x368968u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36896c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36896cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_368970:
    // 0x368970: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x368970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x368974: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x368974u;
    {
        const bool branch_taken_0x368974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368974u;
        // 0x368978: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368974) {
            ctx->pc = 0x3689A0u;
            goto label_3689a0;
        }
    }
    ctx->pc = 0x36897Cu;
    // 0x36897c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x36897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x368980: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x368980u;
    {
        const bool branch_taken_0x368980 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x368984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368980u;
        // 0x368984: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368980) {
            ctx->pc = 0x368998u;
            goto label_368998;
        }
    }
    ctx->pc = 0x368988u;
    // 0x368988: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x368988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36898c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x36898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x368990: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x368990u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x368994: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x368994u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_368998:
    // 0x368998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368998u;
    {
        const bool branch_taken_0x368998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368998u;
        // 0x36899c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368998) {
            ctx->pc = 0x3689A4u;
            goto label_3689a4;
        }
    }
    ctx->pc = 0x3689A0u;
label_3689a0:
    // 0x3689a0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x3689a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_3689a4:
    // 0x3689a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3689a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3689a8: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3689a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3689ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3689ACu;
    {
        const bool branch_taken_0x3689ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3689B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689ACu;
        // 0x3689b0: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3689ac) {
            ctx->pc = 0x3689BCu;
            goto label_3689bc;
        }
    }
    ctx->pc = 0x3689B4u;
    // 0x3689b4: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3689b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3689b8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3689b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_3689bc:
    // 0x3689bc: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x3689bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x3689c0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x3689c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x3689c4: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x3689c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x3689c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3689c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3689cc: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x3689ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x3689d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3689d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3689d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3689D4u;
    {
        const bool branch_taken_0x3689d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3689D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689D4u;
        // 0x3689d8: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3689d4) {
            ctx->pc = 0x3689FCu;
            goto label_3689fc;
        }
    }
    ctx->pc = 0x3689DCu;
    // 0x3689dc: 0x0  nop
    ctx->pc = 0x3689dcu;
    // NOP
label_3689e0:
    // 0x3689e0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3689e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3689e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3689E4u;
    {
        const bool branch_taken_0x3689e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3689E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689E4u;
        // 0x3689e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3689e4) {
            ctx->pc = 0x3689F4u;
            goto label_3689f4;
        }
    }
    ctx->pc = 0x3689ECu;
    // 0x3689ec: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3689ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3689f0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3689f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_3689f4:
    // 0x3689f4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x3689f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_3689f8:
    // 0x3689f8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3689f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_3689fc:
    // 0x3689fc: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x3689fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x368a00: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x368a00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x368a04: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x368a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x368a08: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x368a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x368a0c: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x368a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x368a10: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x368a10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x368a14: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x368a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x368a18: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x368a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x368a1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x368a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x368a20: 0x3e00008  jr          $ra
    ctx->pc = 0x368A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A20u;
        // 0x368a24: 0xace30024  sw          $v1, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368A28u;
}
