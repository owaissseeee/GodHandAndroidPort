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

// Function: func_001DCC30
// Address: 0x1dcc30 - 0x1dcda8
void func_001DCC30_0x1dcc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DCC30_0x1dcc30");
#endif

    switch (ctx->pc) {
        case 0x1dcc80u: goto label_1dcc80;
        case 0x1dcc90u: goto label_1dcc90;
        case 0x1dccc8u: goto label_1dccc8;
        case 0x1dcce8u: goto label_1dcce8;
        case 0x1dcd38u: goto label_1dcd38;
        default: break;
    }

    ctx->pc = 0x1dcc30u;

    // 0x1dcc30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dcc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1dcc34: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1dcc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dcc38: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1dcc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1dcc3c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1dcc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1dcc40: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dcc44: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1dcc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dcc48: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dcc4c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dcc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dcc50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dcc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc54: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dcc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dcc58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dcc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dcc5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dcc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dcc60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dcc64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dcc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc68: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dcc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dcc6c: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dcc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dcc70: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dcc74: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dcc74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dcc78: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DCC78u;
    SET_GPR_U32(ctx, 31, 0x1DCC80u);
    ctx->pc = 0x1DCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC78u;
    // 0x1dcc7c: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DCC78u, 0x1DCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC80u;
label_1dcc80:
    // 0x1dcc80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dcc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcc84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dcc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dcc8c: 0x0  nop
    ctx->pc = 0x1dcc8cu;
    // NOP
label_1dcc90:
    // 0x1dcc90: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1dcc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcc94: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCC94u;
    {
        const bool branch_taken_0x1dcc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC94u;
        // 0x1dcc98: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc94) {
            ctx->pc = 0x1DCCA4u;
            goto label_1dcca4;
        }
    }
    ctx->pc = 0x1DCC9Cu;
    // 0x1dcc9c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1dcc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dcca0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1dcca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1dcca4:
    // 0x1dcca4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DCCA4u;
    {
        const bool branch_taken_0x1dcca4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1DCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCA4u;
        // 0x1dcca8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcca4) {
            ctx->pc = 0x1DCC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcc90;
        }
    }
    ctx->pc = 0x1DCCACu;
    // 0x1dccac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dccb0: 0x14820037  bne         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DCCB0u;
    {
        const bool branch_taken_0x1dccb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCB0u;
        // 0x1dccb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccb0) {
            ctx->pc = 0x1DCD90u;
            goto label_1dcd90;
        }
    }
    ctx->pc = 0x1DCCB8u;
    // 0x1dccb8: 0x262c3004  addiu       $t4, $s1, 0x3004
    ctx->pc = 0x1dccb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    // 0x1dccbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dccbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccc0: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1dccc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccc4: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x1dccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1dccc8:
    // 0x1dccc8: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x1dccc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dcccc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DCCCCu;
    {
        const bool branch_taken_0x1dcccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCCCu;
        // 0x1dccd0: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcccc) {
            ctx->pc = 0x1DCD1Cu;
            goto label_1dcd1c;
        }
    }
    ctx->pc = 0x1DCCD4u;
    // 0x1dccd4: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1dccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1dccd8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1dccdc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1dcce0: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x1dcce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1dcce4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1dcce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcce8:
    // 0x1dcce8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dccec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1dccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dccf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dccf4: 0x8c650604  lw          $a1, 0x604($v1)
    ctx->pc = 0x1dccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dccf8: 0x8c820604  lw          $v0, 0x604($a0)
    ctx->pc = 0x1dccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1dccfc: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCCFCu;
    {
        const bool branch_taken_0x1dccfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dccfc) {
            ctx->pc = 0x1DCD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCFCu;
            // 0x1dcd00: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCD10u;
            goto label_1dcd10;
        }
    }
    ctx->pc = 0x1DCD04u;
    // 0x1dcd04: 0xa7a90040  sh          $t1, 0x40($sp)
    ctx->pc = 0x1dcd04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 9));
    // 0x1dcd08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCD08u;
    {
        const bool branch_taken_0x1dcd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD08u;
        // 0x1dcd0c: 0xa7a60042  sh          $a2, 0x42($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd08) {
            ctx->pc = 0x1DCD1Cu;
            goto label_1dcd1c;
        }
    }
    ctx->pc = 0x1DCD10u;
label_1dcd10:
    // 0x1dcd10: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x1dcd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dcd14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DCD14u;
    {
        const bool branch_taken_0x1dcd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD14u;
        // 0x1dcd18: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd14) {
            ctx->pc = 0x1DCCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcce8;
        }
    }
    ctx->pc = 0x1DCD1Cu;
label_1dcd1c:
    // 0x1dcd1c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1dcd1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd20: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x1dcd20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dcd24: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1DCD24u;
    {
        const bool branch_taken_0x1dcd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD24u;
        // 0x1dcd28: 0x25260001  addiu       $a2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd24) {
            ctx->pc = 0x1DCCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dccc8;
        }
    }
    ctx->pc = 0x1DCD2Cu;
    // 0x1dcd2c: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x1dcd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1dcd30: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1dcd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dcd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dcd38:
    // 0x1dcd38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dcd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcd3c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dcd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dcd40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dcd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dcd44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dcd48: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1dcd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1dcd4c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DCD4Cu;
    {
        const bool branch_taken_0x1dcd4c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD4Cu;
        // 0x1dcd50: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd4c) {
            ctx->pc = 0x1DCD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcd38;
        }
    }
    ctx->pc = 0x1DCD54u;
    // 0x1dcd54: 0x97a40040  lhu         $a0, 0x40($sp)
    ctx->pc = 0x1dcd54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcd58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcd5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dcd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dcd60: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1dcd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dcd64: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1dcd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcd68: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1dcd6c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1dcd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dcd70: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1dcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1dcd74: 0x97a40042  lhu         $a0, 0x42($sp)
    ctx->pc = 0x1dcd74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x1dcd78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dcd7c: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dcd80: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcd84: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1dcd88: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1dcd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dcd8c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1dcd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1dcd90:
    // 0x1dcd90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1dcd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dcd94: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1dcd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dcd98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD9Cu;
        // 0x1dcda0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDA4u;
    // 0x1dcda4: 0x0  nop
    ctx->pc = 0x1dcda4u;
    // NOP
    ctx->pc = 0x1dcda8u;
}
