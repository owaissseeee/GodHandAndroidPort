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

// Function: end_fde_sort
// Address: 0x321ad0 - 0x321d38
void end_fde_sort_0x321ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("end_fde_sort_0x321ad0");
#endif

    switch (ctx->pc) {
        case 0x321afcu: goto label_321afc;
        case 0x321b08u: goto label_321b08;
        case 0x321b24u: goto label_321b24;
        case 0x321b38u: goto label_321b38;
        case 0x321b48u: goto label_321b48;
        case 0x321c18u: goto label_321c18;
        case 0x321c48u: goto label_321c48;
        case 0x321d10u: goto label_321d10;
        case 0x321d18u: goto label_321d18;
        default: break;
    }

    ctx->pc = 0x321ad0u;

    // 0x321ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321ad4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321ae8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x321ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x321aec: 0x12050003  beq         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321AECu;
    {
        const bool branch_taken_0x321aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x321AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AECu;
        // 0x321af0: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aec) {
            ctx->pc = 0x321AFCu;
            goto label_321afc;
        }
    }
    ctx->pc = 0x321AF4u;
    // 0x321af4: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x321AF4u;
    SET_GPR_U32(ctx, 31, 0x321AFCu);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x321AF4u, 0x321AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AFCu;
label_321afc:
    // 0x321afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b00: 0xc0c89d2  jal         func_322748
    ctx->pc = 0x321B00u;
    SET_GPR_U32(ctx, 31, 0x321B08u);
    ctx->pc = 0x321B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B00u;
    // 0x321b04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322748u, 0x321B00u, 0x321B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B08u;
label_321b08:
    // 0x321b08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x321b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x321b0c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x321b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x321b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321b14: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321B14u;
    {
        const bool branch_taken_0x321b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x321b14) {
            ctx->pc = 0x321B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321B14u;
            // 0x321b18: 0x8e4d0004  lw          $t5, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321B24u;
            goto label_321b24;
        }
    }
    ctx->pc = 0x321B1Cu;
    // 0x321b1c: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x321B1Cu;
    SET_GPR_U32(ctx, 31, 0x321B24u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x321B1Cu, 0x321B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B24u;
label_321b24:
    // 0x321b24: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x321b24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x321b28: 0x11a00034  beqz        $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x321B28u;
    {
        const bool branch_taken_0x321b28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B28u;
        // 0x321b2c: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b28) {
            ctx->pc = 0x321BFCu;
            goto label_321bfc;
        }
    }
    ctx->pc = 0x321B30u;
    // 0x321b30: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x321b30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x321b34: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x321b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_321b38:
    // 0x321b38: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x321b38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321b3c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x321B3Cu;
    {
        const bool branch_taken_0x321b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B3Cu;
        // 0x321b40: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b3c) {
            ctx->pc = 0x321BDCu;
            goto label_321bdc;
        }
    }
    ctx->pc = 0x321B44u;
    // 0x321b44: 0x0  nop
    ctx->pc = 0x321b44u;
    // NOP
label_321b48:
    // 0x321b48: 0x246c0002  addiu       $t4, $v1, 0x2
    ctx->pc = 0x321b48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x321b4c: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x321b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x321b50: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x321B50u;
    {
        const bool branch_taken_0x321b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B50u;
        // 0x321b54: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b50) {
            ctx->pc = 0x321BA0u;
            goto label_321ba0;
        }
    }
    ctx->pc = 0x321B58u;
    // 0x321b58: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x321b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x321b5c: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x321b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x321b60: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x321b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x321b64: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x321b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x321b68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x321b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x321b6c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x321b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x321b70: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x321B70u;
    {
        const bool branch_taken_0x321b70 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x321B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B70u;
        // 0x321b74: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b70) {
            ctx->pc = 0x321BA4u;
            goto label_321ba4;
        }
    }
    ctx->pc = 0x321B78u;
    // 0x321b78: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x321b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x321b7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x321b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321b80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x321b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x321b84: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x321b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x321b88: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x321B88u;
    {
        const bool branch_taken_0x321b88 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x321B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B88u;
        // 0x321b8c: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b88) {
            ctx->pc = 0x321BA8u;
            goto label_321ba8;
        }
    }
    ctx->pc = 0x321B90u;
    // 0x321b90: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x321b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x321b94: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x321b94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x321b98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321B98u;
    {
        const bool branch_taken_0x321b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B98u;
        // 0x321b9c: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b98) {
            ctx->pc = 0x321BD8u;
            goto label_321bd8;
        }
    }
    ctx->pc = 0x321BA0u;
label_321ba0:
    // 0x321ba0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x321ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_321ba4:
    // 0x321ba4: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x321ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_321ba8:
    // 0x321ba8: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x321ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x321bac: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x321bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x321bb0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x321bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x321bb4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x321bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x321bb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x321bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x321bbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x321bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321bc0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x321BC0u;
    {
        const bool branch_taken_0x321bc0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x321bc0) {
            ctx->pc = 0x321BECu;
            goto label_321bec;
        }
    }
    ctx->pc = 0x321BC8u;
    // 0x321bc8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x321bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x321bcc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x321bccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x321bd0: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x321bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x321bd4: 0x0  nop
    ctx->pc = 0x321bd4u;
    // NOP
label_321bd8:
    // 0x321bd8: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x321bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_321bdc:
    // 0x321bdc: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x321bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x321be0: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x321be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x321be4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x321BE4u;
    {
        const bool branch_taken_0x321be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BE4u;
        // 0x321be8: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321be4) {
            ctx->pc = 0x321B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321b48;
        }
    }
    ctx->pc = 0x321BECu;
label_321bec:
    // 0x321bec: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x321BECu;
    {
        const bool branch_taken_0x321bec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x321BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BECu;
        // 0x321bf0: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bec) {
            ctx->pc = 0x321B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321b38;
        }
    }
    ctx->pc = 0x321BF4u;
    // 0x321bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321BF4u;
    {
        const bool branch_taken_0x321bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321bf4) {
            ctx->pc = 0x321C00u;
            goto label_321c00;
        }
    }
    ctx->pc = 0x321BFCu;
label_321bfc:
    // 0x321bfc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x321bfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321c00:
    // 0x321c00: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x321C00u;
    {
        const bool branch_taken_0x321c00 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x321C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C00u;
        // 0x321c04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c00) {
            ctx->pc = 0x321D08u;
            goto label_321d08;
        }
    }
    ctx->pc = 0x321C08u;
    // 0x321c08: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x321c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x321c0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x321c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321c10: 0x4b7021  addu        $t6, $v0, $t3
    ctx->pc = 0x321c10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x321c14: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x321c14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_321c18:
    // 0x321c18: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x321c18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x321c1c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x321c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x321c20: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x321c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x321c24: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x321c24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x321c28: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x321c28u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x321c2c: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x321c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x321c30: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x321C30u;
    {
        const bool branch_taken_0x321c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C30u;
        // 0x321c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c30) {
            ctx->pc = 0x321CF8u;
            goto label_321cf8;
        }
    }
    ctx->pc = 0x321C38u;
    // 0x321c38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x321c38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c3c: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x321c3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x321c40: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x321c40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x321c44: 0x0  nop
    ctx->pc = 0x321c44u;
    // NOP
label_321c48:
    // 0x321c48: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x321c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x321c4c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x321C4Cu;
    {
        const bool branch_taken_0x321c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C4Cu;
        // 0x321c50: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c4c) {
            ctx->pc = 0x321CA0u;
            goto label_321ca0;
        }
    }
    ctx->pc = 0x321C54u;
    // 0x321c54: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x321c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x321c58: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x321c58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x321c5c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x321c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x321c60: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x321c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x321c64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x321c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x321c68: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x321c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x321c6c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x321C6Cu;
    {
        const bool branch_taken_0x321c6c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x321C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C6Cu;
        // 0x321c70: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c6c) {
            ctx->pc = 0x321CA4u;
            goto label_321ca4;
        }
    }
    ctx->pc = 0x321C74u;
    // 0x321c74: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x321c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x321c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x321c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321c7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x321c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x321c80: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x321c84: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x321C84u;
    {
        const bool branch_taken_0x321c84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x321C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C84u;
        // 0x321c88: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c84) {
            ctx->pc = 0x321CA8u;
            goto label_321ca8;
        }
    }
    ctx->pc = 0x321C8Cu;
    // 0x321c8c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x321c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x321c90: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x321c90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x321c94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x321C94u;
    {
        const bool branch_taken_0x321c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C94u;
        // 0x321c98: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c94) {
            ctx->pc = 0x321CD8u;
            goto label_321cd8;
        }
    }
    ctx->pc = 0x321C9Cu;
    // 0x321c9c: 0x0  nop
    ctx->pc = 0x321c9cu;
    // NOP
label_321ca0:
    // 0x321ca0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x321ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_321ca4:
    // 0x321ca4: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x321ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_321ca8:
    // 0x321ca8: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x321ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x321cac: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x321cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x321cb0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x321cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x321cb4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x321cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x321cb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x321cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x321cbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x321cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321cc0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x321CC0u;
    {
        const bool branch_taken_0x321cc0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x321cc0) {
            ctx->pc = 0x321CFCu;
            goto label_321cfc;
        }
    }
    ctx->pc = 0x321CC8u;
    // 0x321cc8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x321cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x321ccc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x321cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x321cd0: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x321cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x321cd4: 0x0  nop
    ctx->pc = 0x321cd4u;
    // NOP
label_321cd8:
    // 0x321cd8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x321cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321cdc: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x321cdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ce0: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x321ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x321ce4: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x321ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x321ce8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x321CE8u;
    {
        const bool branch_taken_0x321ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CE8u;
        // 0x321cec: 0x254c0002  addiu       $t4, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ce8) {
            ctx->pc = 0x321C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321c48;
        }
    }
    ctx->pc = 0x321CF0u;
    // 0x321cf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321CF0u;
    {
        const bool branch_taken_0x321cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321cf0) {
            ctx->pc = 0x321CFCu;
            goto label_321cfc;
        }
    }
    ctx->pc = 0x321CF8u;
label_321cf8:
    // 0x321cf8: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x321cf8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_321cfc:
    // 0x321cfc: 0x11e0ffc6  beqz        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x321CFCu;
    {
        const bool branch_taken_0x321cfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CFCu;
        // 0x321d00: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cfc) {
            ctx->pc = 0x321C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321c18;
        }
    }
    ctx->pc = 0x321D04u;
    // 0x321d04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x321d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321d08:
    // 0x321d08: 0xc0c8674  jal         func_3219D0
    ctx->pc = 0x321D08u;
    SET_GPR_U32(ctx, 31, 0x321D10u);
    ctx->pc = 0x321D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D08u;
    // 0x321d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3219D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3219D0u, 0x321D08u, 0x321D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D10u;
label_321d10:
    // 0x321d10: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x321D10u;
    SET_GPR_U32(ctx, 31, 0x321D18u);
    ctx->pc = 0x321D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D10u;
    // 0x321d14: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x321D10u, 0x321D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D18u;
label_321d18:
    // 0x321d18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x321d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x321d1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321d20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321d24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x321D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D2Cu;
        // 0x321d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D34u;
    // 0x321d34: 0x0  nop
    ctx->pc = 0x321d34u;
    // NOP
    ctx->pc = 0x321d38u;
}
