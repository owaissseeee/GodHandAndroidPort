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

// Function: gets__7istreamPPcc
// Address: 0x38acb0 - 0x38adc8
void gets__7istreamPPcc_0x38acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gets__7istreamPPcc_0x38acb0");
#endif

    switch (ctx->pc) {
        case 0x38ad18u: goto label_38ad18;
        case 0x38ad3cu: goto label_38ad3c;
        default: break;
    }

    ctx->pc = 0x38acb0u;

    // 0x38acb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38acb4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x38acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x38acb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x38acbc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38acc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38acc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38acc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38acc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38accc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38acccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38acd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38acd4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38acd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38acd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38ACD8u;
    {
        const bool branch_taken_0x38acd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACD8u;
        // 0x38acdc: 0x68e03  sra         $s1, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acd8) {
            ctx->pc = 0x38ACF0u;
            goto label_38acf0;
        }
    }
    ctx->pc = 0x38ACE0u;
    // 0x38ace0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x38ace4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ace8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38ACE8u;
    {
        const bool branch_taken_0x38ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACE8u;
        // 0x38acec: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ace8) {
            ctx->pc = 0x38AD1Cu;
            goto label_38ad1c;
        }
    }
    ctx->pc = 0x38ACF0u;
label_38acf0:
    // 0x38acf0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x38acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38acf4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38ACF4u;
    {
        const bool branch_taken_0x38acf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACF4u;
        // 0x38acf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acf4) {
            ctx->pc = 0x38AD1Cu;
            goto label_38ad1c;
        }
    }
    ctx->pc = 0x38ACFCu;
    // 0x38acfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38ad00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38ad04: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x38ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38ad08: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38AD08u;
    {
        const bool branch_taken_0x38ad08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD08u;
        // 0x38ad0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad08) {
            ctx->pc = 0x38AD1Cu;
            goto label_38ad1c;
        }
    }
    ctx->pc = 0x38AD10u;
    // 0x38ad10: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38AD10u;
    SET_GPR_U32(ctx, 31, 0x38AD18u);
    ctx->pc = 0x38AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD10u;
    // 0x38ad14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38AD10u, 0x38AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD18u;
label_38ad18:
    // 0x38ad18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ad1c:
    // 0x38ad1c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x38AD1Cu;
    {
        const bool branch_taken_0x38ad1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD1Cu;
        // 0x38ad20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad1c) {
            ctx->pc = 0x38ADA0u;
            goto label_38ada0;
        }
    }
    ctx->pc = 0x38AD24u;
    // 0x38ad24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ad28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x38ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x38ad2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38ad2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ad30: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x38ad30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38ad34: 0xc0e2adc  jal         func_38AB70
    ctx->pc = 0x38AD34u;
    SET_GPR_U32(ctx, 31, 0x38AD3Cu);
    ctx->pc = 0x38AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD34u;
    // 0x38ad38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AB70u, 0x38AD34u, 0x38AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD3Cu;
label_38ad3c:
    // 0x38ad3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38AD3Cu;
    {
        const bool branch_taken_0x38ad3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD3Cu;
        // 0x38ad40: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad3c) {
            ctx->pc = 0x38AD58u;
            goto label_38ad58;
        }
    }
    ctx->pc = 0x38AD44u;
    // 0x38ad44: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x38ad44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ad48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38ad4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38ad4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38ad50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38AD50u;
    {
        const bool branch_taken_0x38ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD50u;
        // 0x38ad54: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad50) {
            ctx->pc = 0x38AD60u;
            goto label_38ad60;
        }
    }
    ctx->pc = 0x38AD58u;
label_38ad58:
    // 0x38ad58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ad5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x38ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_38ad60:
    // 0x38ad60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38ad64: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x38ad68: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38AD68u;
    {
        const bool branch_taken_0x38ad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD68u;
        // 0x38ad6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad68) {
            ctx->pc = 0x38ADACu;
            goto label_38adac;
        }
    }
    ctx->pc = 0x38AD70u;
    // 0x38ad70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ad74: 0x9043001a  lbu         $v1, 0x1A($v0)
    ctx->pc = 0x38ad74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x38ad78: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x38ad78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x38ad7c: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x38ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x38ad80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38ad84: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38AD84u;
    {
        const bool branch_taken_0x38ad84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD84u;
        // 0x38ad88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad84) {
            ctx->pc = 0x38ADACu;
            goto label_38adac;
        }
    }
    ctx->pc = 0x38AD8Cu;
    // 0x38ad8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ad90: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38ad90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38ad94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38ad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x38ad98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38AD98u;
    {
        const bool branch_taken_0x38ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD98u;
        // 0x38ad9c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad98) {
            ctx->pc = 0x38ADA8u;
            goto label_38ada8;
        }
    }
    ctx->pc = 0x38ADA0u;
label_38ada0:
    // 0x38ada0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x38ada4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x38ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_38ada8:
    // 0x38ada8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38ada8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38adac:
    // 0x38adac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38adacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38adb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38adb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38adb4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38adb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38adb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38adb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38adbc: 0x3e00008  jr          $ra
    ctx->pc = 0x38ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADBCu;
        // 0x38adc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38ADC4u;
    // 0x38adc4: 0x0  nop
    ctx->pc = 0x38adc4u;
    // NOP
    ctx->pc = 0x38adc8u;
}
