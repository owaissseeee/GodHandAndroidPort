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

// Function: func_001EBF50
// Address: 0x1ebf50 - 0x1ec088
void func_001EBF50_0x1ebf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EBF50_0x1ebf50");
#endif

    switch (ctx->pc) {
        case 0x1ec010u: goto label_1ec010;
        case 0x1ec018u: goto label_1ec018;
        default: break;
    }

    ctx->pc = 0x1ebf50u;

    // 0x1ebf50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ebf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ebf54: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ebf54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ebf58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ebf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ebf5c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1ebf5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ebf60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ebf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ebf64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebf64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ebf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ebf6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ebf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ebf70: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1EBF70u;
    {
        const bool branch_taken_0x1ebf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF70u;
        // 0x1ebf74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf70) {
            ctx->pc = 0x1EC068u;
            goto label_1ec068;
        }
    }
    ctx->pc = 0x1EBF78u;
    // 0x1ebf78: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ebf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ebf7c: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ebf80: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ebf84: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBF84u;
    {
        const bool branch_taken_0x1ebf84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF84u;
        // 0x1ebf88: 0x24b30006  addiu       $s3, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf84) {
            ctx->pc = 0x1EBFD4u;
            goto label_1ebfd4;
        }
    }
    ctx->pc = 0x1EBF8Cu;
    // 0x1ebf8c: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x1ebf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebf90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBF90u;
    {
        const bool branch_taken_0x1ebf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF90u;
        // 0x1ebf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf90) {
            ctx->pc = 0x1EBFB0u;
            goto label_1ebfb0;
        }
    }
    ctx->pc = 0x1EBF98u;
    // 0x1ebf98: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ebf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ebf9c: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1ebf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1ebfa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebfa4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebfa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebfa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ebfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ebfac: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1ebfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1ebfb0:
    // 0x1ebfb0: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x1ebfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebfb4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EBFB4u;
    {
        const bool branch_taken_0x1ebfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFB4u;
        // 0x1ebfb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfb4) {
            ctx->pc = 0x1EC068u;
            goto label_1ec068;
        }
    }
    ctx->pc = 0x1EBFBCu;
    // 0x1ebfbc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ebfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ebfc0: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1ebfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x1ebfc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebfc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebfcc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EBFCCu;
    {
        const bool branch_taken_0x1ebfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFCCu;
        // 0x1ebfd0: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfcc) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EBFD4u;
label_1ebfd4:
    // 0x1ebfd4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ebfd8: 0x262301c4  addiu       $v1, $s1, 0x1C4
    ctx->pc = 0x1ebfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
    // 0x1ebfdc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ebfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebfe0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1ebfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebfe4: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EBFE4u;
    {
        const bool branch_taken_0x1ebfe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFE4u;
        // 0x1ebfe8: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfe4) {
            ctx->pc = 0x1EC068u;
            goto label_1ec068;
        }
    }
    ctx->pc = 0x1EBFECu;
    // 0x1ebfec: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1ebfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebff0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebff4: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EBFF4u;
    {
        const bool branch_taken_0x1ebff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebff4) {
            ctx->pc = 0x1EBFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBFF4u;
            // 0x1ebff8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC06Cu;
            goto label_1ec06c;
        }
    }
    ctx->pc = 0x1EBFFCu;
    // 0x1ebffc: 0xacc00104  sw          $zero, 0x104($a2)
    ctx->pc = 0x1ebffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
    // 0x1ec000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ec000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec004: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ec004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1ec008: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EC008u;
    SET_GPR_U32(ctx, 31, 0x1EC010u);
    ctx->pc = 0x1EC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC008u;
    // 0x1ec00c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EC008u, 0x1EC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC010u;
label_1ec010:
    // 0x1ec010: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EC010u;
    SET_GPR_U32(ctx, 31, 0x1EC018u);
    ctx->pc = 0x1EC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC010u;
    // 0x1ec014: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EC010u, 0x1EC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC018u;
label_1ec018:
    // 0x1ec018: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ec01c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC01Cu;
    {
        const bool branch_taken_0x1ec01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC01Cu;
        // 0x1ec020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec01c) {
            ctx->pc = 0x1EC040u;
            goto label_1ec040;
        }
    }
    ctx->pc = 0x1EC024u;
    // 0x1ec024: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ec024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ec028: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1ec028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1ec02c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec030: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec034: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ec034u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ec038: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ec038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ec03c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1ec03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1ec040:
    // 0x1ec040: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x1ec040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ec044: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC044u;
    {
        const bool branch_taken_0x1ec044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC044u;
        // 0x1ec048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec044) {
            ctx->pc = 0x1EC068u;
            goto label_1ec068;
        }
    }
    ctx->pc = 0x1EC04Cu;
    // 0x1ec04c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1ec04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ec050: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1ec050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x1ec054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec058: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec05c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ec05cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ec060: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ec060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ec064:
    // 0x1ec064: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1ec064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1ec068:
    // 0x1ec068: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ec068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec06c:
    // 0x1ec06c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ec06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec070: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec074: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ec074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC07Cu;
        // 0x1ec080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC084u;
    // 0x1ec084: 0x0  nop
    ctx->pc = 0x1ec084u;
    // NOP
    ctx->pc = 0x1ec088u;
}
