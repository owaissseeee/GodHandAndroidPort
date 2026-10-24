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

// Function: func_001DCAD8
// Address: 0x1dcad8 - 0x1dcc30
void func_001DCAD8_0x1dcad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DCAD8_0x1dcad8");
#endif

    switch (ctx->pc) {
        case 0x1dcb28u: goto label_1dcb28;
        case 0x1dcb38u: goto label_1dcb38;
        case 0x1dcb70u: goto label_1dcb70;
        case 0x1dcb88u: goto label_1dcb88;
        case 0x1dcbd8u: goto label_1dcbd8;
        default: break;
    }

    ctx->pc = 0x1dcad8u;

    // 0x1dcad8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dcad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dcadc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1dcadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dcae0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dcae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dcae4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dcae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dcae8: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dcaec: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1dcaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dcaf0: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dcaf4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dcaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dcaf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dcaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcafc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dcafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dcb00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dcb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dcb04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dcb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dcb08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dcb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dcb0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb10: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dcb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dcb14: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dcb14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dcb18: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dcb18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dcb1c: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dcb1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dcb20: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DCB20u;
    SET_GPR_U32(ctx, 31, 0x1DCB28u);
    ctx->pc = 0x1DCB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB20u;
    // 0x1dcb24: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DCB20u, 0x1DCB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB28u;
label_1dcb28:
    // 0x1dcb28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dcb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcb2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dcb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dcb34: 0x0  nop
    ctx->pc = 0x1dcb34u;
    // NOP
label_1dcb38:
    // 0x1dcb38: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1dcb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcb3c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB3Cu;
    {
        const bool branch_taken_0x1dcb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB3Cu;
        // 0x1dcb40: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb3c) {
            ctx->pc = 0x1DCB4Cu;
            goto label_1dcb4c;
        }
    }
    ctx->pc = 0x1DCB44u;
    // 0x1dcb44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1dcb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dcb48: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1dcb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1dcb4c:
    // 0x1dcb4c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DCB4Cu;
    {
        const bool branch_taken_0x1dcb4c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1DCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB4Cu;
        // 0x1dcb50: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb4c) {
            ctx->pc = 0x1DCB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb38;
        }
    }
    ctx->pc = 0x1DCB54u;
    // 0x1dcb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcb58: 0x14820030  bne         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DCB58u;
    {
        const bool branch_taken_0x1dcb58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB58u;
        // 0x1dcb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb58) {
            ctx->pc = 0x1DCC1Cu;
            goto label_1dcc1c;
        }
    }
    ctx->pc = 0x1DCB60u;
    // 0x1dcb60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcb60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb64: 0x262d3004  addiu       $t5, $s1, 0x3004
    ctx->pc = 0x1dcb64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    // 0x1dcb68: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1dcb68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcb6c: 0x91e00  sll         $v1, $t1, 24
    ctx->pc = 0x1dcb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
label_1dcb70:
    // 0x1dcb70: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1dcb74: 0x1a25821  addu        $t3, $t5, $v0
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1dcb78: 0x35603  sra         $t2, $v1, 24
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1dcb7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb80: 0x252c0001  addiu       $t4, $t1, 0x1
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dcb84: 0x26273004  addiu       $a3, $s1, 0x3004
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1dcb88:
    // 0x1dcb88: 0x5128000b  beql        $t1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCB88u;
    {
        const bool branch_taken_0x1dcb88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dcb88) {
            ctx->pc = 0x1DCB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB88u;
            // 0x1dcb8c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCBB8u;
            goto label_1dcbb8;
        }
    }
    ctx->pc = 0x1DCB90u;
    // 0x1dcb90: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1dcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1dcb94: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1dcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dcb98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dcb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcb9c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1dcb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcba0: 0x8c860604  lw          $a2, 0x604($a0)
    ctx->pc = 0x1dcba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1dcba4: 0x8ca20604  lw          $v0, 0x604($a1)
    ctx->pc = 0x1dcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1540)));
    // 0x1dcba8: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCBA8u;
    {
        const bool branch_taken_0x1dcba8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcba8) {
            ctx->pc = 0x1DCBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCBA8u;
            // 0x1dcbac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCBB8u;
            goto label_1dcbb8;
        }
    }
    ctx->pc = 0x1DCBB0u;
    // 0x1dcbb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCBB0u;
    {
        const bool branch_taken_0x1dcbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBB0u;
        // 0x1dcbb4: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbb0) {
            ctx->pc = 0x1DCBC4u;
            goto label_1dcbc4;
        }
    }
    ctx->pc = 0x1DCBB8u;
label_1dcbb8:
    // 0x1dcbb8: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1dcbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dcbbc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DCBBCu;
    {
        const bool branch_taken_0x1dcbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBBCu;
        // 0x1dcbc0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbbc) {
            ctx->pc = 0x1DCB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb88;
        }
    }
    ctx->pc = 0x1DCBC4u;
label_1dcbc4:
    // 0x1dcbc4: 0x514e0011  beql        $t2, $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DCBC4u;
    {
        const bool branch_taken_0x1dcbc4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        if (branch_taken_0x1dcbc4) {
            ctx->pc = 0x1DCBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCBC4u;
            // 0x1dcbc8: 0x180482d  daddu       $t1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC0Cu;
            goto label_1dcc0c;
        }
    }
    ctx->pc = 0x1DCBCCu;
    // 0x1dcbcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbd0: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x1dcbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1dcbd4: 0x26243004  addiu       $a0, $s1, 0x3004
    ctx->pc = 0x1dcbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1dcbd8:
    // 0x1dcbd8: 0x15450004  bne         $t2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCBD8u;
    {
        const bool branch_taken_0x1dcbd8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD8u;
        // 0x1dcbdc: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbd8) {
            ctx->pc = 0x1DCBECu;
            goto label_1dcbec;
        }
    }
    ctx->pc = 0x1DCBE0u;
    // 0x1dcbe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dcbe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCBE4u;
    {
        const bool branch_taken_0x1dcbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBE4u;
        // 0x1dcbe8: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbe4) {
            ctx->pc = 0x1DCBF4u;
            goto label_1dcbf4;
        }
    }
    ctx->pc = 0x1DCBECu;
label_1dcbec:
    // 0x1dcbec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dcbf0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dcbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1dcbf4:
    // 0x1dcbf4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1dcbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1dcbf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1dcbfc: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dcbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dcc00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DCC00u;
    {
        const bool branch_taken_0x1dcc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC00u;
        // 0x1dcc04: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc00) {
            ctx->pc = 0x1DCBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbd8;
        }
    }
    ctx->pc = 0x1DCC08u;
    // 0x1dcc08: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1dcc08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc0c:
    // 0x1dcc0c: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x1dcc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dcc10: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1DCC10u;
    {
        const bool branch_taken_0x1dcc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC10u;
        // 0x1dcc14: 0x91e00  sll         $v1, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc10) {
            ctx->pc = 0x1DCB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb70;
        }
    }
    ctx->pc = 0x1DCC18u;
    // 0x1dcc18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcc1c:
    // 0x1dcc1c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dcc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dcc20: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dcc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcc24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dcc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC28u;
        // 0x1dcc2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC30u;
}
