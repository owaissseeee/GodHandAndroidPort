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

// Function: func_001DC980
// Address: 0x1dc980 - 0x1dcad8
void func_001DC980_0x1dc980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DC980_0x1dc980");
#endif

    switch (ctx->pc) {
        case 0x1dc9d0u: goto label_1dc9d0;
        case 0x1dc9d8u: goto label_1dc9d8;
        case 0x1dca00u: goto label_1dca00;
        case 0x1dca08u: goto label_1dca08;
        case 0x1dca48u: goto label_1dca48;
        default: break;
    }

    ctx->pc = 0x1dc980u;

    // 0x1dc980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dc980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc984: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1dc984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dc988: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dc988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dc98c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dc98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dc990: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dc990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dc994: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1dc994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc998: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dc998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dc99c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dc9a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9a4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dc9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dc9a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dc9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dc9ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc9b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc9b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dc9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9b8: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dc9bc: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dc9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dc9c0: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dc9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dc9c4: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dc9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dc9c8: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DC9C8u;
    SET_GPR_U32(ctx, 31, 0x1DC9D0u);
    ctx->pc = 0x1DC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9C8u;
    // 0x1dc9cc: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DC9C8u, 0x1DC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9D0u;
label_1dc9d0:
    // 0x1dc9d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dc9d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dc9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc9d8:
    // 0x1dc9d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1dc9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc9dc: 0x14440035  bne         $v0, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DC9DCu;
    {
        const bool branch_taken_0x1dc9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9DCu;
        // 0x1dc9e0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9dc) {
            ctx->pc = 0x1DCAB4u;
            goto label_1dcab4;
        }
    }
    ctx->pc = 0x1DC9E4u;
    // 0x1dc9e4: 0x262d3004  addiu       $t5, $s1, 0x3004
    ctx->pc = 0x1dc9e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    // 0x1dc9e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9ec: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x1dc9ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9f0: 0x240efffb  addiu       $t6, $zero, -0x5
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1dc9f4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc9f8: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1dc9fc: 0x0  nop
    ctx->pc = 0x1dc9fcu;
    // NOP
label_1dca00:
    // 0x1dca00: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1dca00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dca08:
    // 0x1dca08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dca0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dca10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dca14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dca18: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1dca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1dca1c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DCA1Cu;
    {
        const bool branch_taken_0x1dca1c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA1Cu;
        // 0x1dca20: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca1c) {
            ctx->pc = 0x1DCA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dca08;
        }
    }
    ctx->pc = 0x1DCA24u;
    // 0x1dca24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dca24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca28: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x1dca28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dca2c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DCA2Cu;
    {
        const bool branch_taken_0x1dca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA2Cu;
        // 0x1dca30: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca2c) {
            ctx->pc = 0x1DCA98u;
            goto label_1dca98;
        }
    }
    ctx->pc = 0x1DCA34u;
    // 0x1dca34: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1dca34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1dca38: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1dca38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1dca3c: 0x1825821  addu        $t3, $t4, $v0
    ctx->pc = 0x1dca3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1dca40: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1dca40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1dca44: 0x0  nop
    ctx->pc = 0x1dca44u;
    // NOP
label_1dca48:
    // 0x1dca48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dca4c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x1dca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1dca50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dca58: 0x8c820604  lw          $v0, 0x604($a0)
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1dca5c: 0x8c650604  lw          $a1, 0x604($v1)
    ctx->pc = 0x1dca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dca60: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DCA60u;
    {
        const bool branch_taken_0x1dca60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA60u;
        // 0x1dca64: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca60) {
            ctx->pc = 0x1DCA8Cu;
            goto label_1dca8c;
        }
    }
    ctx->pc = 0x1DCA68u;
    // 0x1dca68: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1dca6c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x1dca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1dca70: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x1dca70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dca74: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1dca74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dca78: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1dca78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1dca7c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1dca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dca80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dca84: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dca84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dca88: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1dca88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1dca8c:
    // 0x1dca8c: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1dca8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dca90: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DCA90u;
    {
        const bool branch_taken_0x1dca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA90u;
        // 0x1dca94: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca90) {
            ctx->pc = 0x1DCA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dca48;
        }
    }
    ctx->pc = 0x1DCA98u;
label_1dca98:
    // 0x1dca98: 0x114f0004  beq         $t2, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCA98u;
    {
        const bool branch_taken_0x1dca98 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA98u;
        // 0x1dca9c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca98) {
            ctx->pc = 0x1DCAACu;
            goto label_1dcaac;
        }
    }
    ctx->pc = 0x1DCAA0u;
    // 0x1dcaa0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1dcaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dcaa4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1DCAA4u;
    {
        const bool branch_taken_0x1dcaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAA4u;
        // 0x1dcaa8: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaa4) {
            ctx->pc = 0x1DCA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dca00;
        }
    }
    ctx->pc = 0x1DCAACu;
label_1dcaac:
    // 0x1dcaac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCAACu;
    {
        const bool branch_taken_0x1dcaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAACu;
        // 0x1dcab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaac) {
            ctx->pc = 0x1DCAC4u;
            goto label_1dcac4;
        }
    }
    ctx->pc = 0x1DCAB4u;
label_1dcab4:
    // 0x1dcab4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1dcab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dcab8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1DCAB8u;
    {
        const bool branch_taken_0x1dcab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAB8u;
        // 0x1dcabc: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcab8) {
            ctx->pc = 0x1DC9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc9d8;
        }
    }
    ctx->pc = 0x1DCAC0u;
    // 0x1dcac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dcac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcac4:
    // 0x1dcac4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dcac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dcac8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dcac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcacc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dcaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAD0u;
        // 0x1dcad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCAD8u;
}
