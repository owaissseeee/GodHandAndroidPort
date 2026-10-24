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

// Function: get__7istreamPcic
// Address: 0x38aa60 - 0x38ab70
void get__7istreamPcic_0x38aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get__7istreamPcic_0x38aa60");
#endif

    switch (ctx->pc) {
        case 0x38aaf0u: goto label_38aaf0;
        case 0x38ab18u: goto label_38ab18;
        default: break;
    }

    ctx->pc = 0x38aa60u;

    // 0x38aa60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38aa64: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x38aa64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x38aa68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38aa6c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x38aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x38aa70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38aa70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x38aa78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38aa78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa7c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38aa80: 0x79603  sra         $s2, $a3, 24
    ctx->pc = 0x38aa80u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 24));
    // 0x38aa84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x38aa88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38aa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa8c: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38AA8Cu;
    {
        const bool branch_taken_0x38aa8c = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x38AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA8Cu;
        // 0x38aa90: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa8c) {
            ctx->pc = 0x38AAACu;
            goto label_38aaac;
        }
    }
    ctx->pc = 0x38AA94u;
    // 0x38aa94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aa98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38aa98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa9c: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x38aa9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x38aaa0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x38aaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x38aaa4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x38AAA4u;
    {
        const bool branch_taken_0x38aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAA4u;
        // 0x38aaa8: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aaa4) {
            ctx->pc = 0x38AB50u;
            goto label_38ab50;
        }
    }
    ctx->pc = 0x38AAACu;
label_38aaac:
    // 0x38aaac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aab0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38aab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38aab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38AAB4u;
    {
        const bool branch_taken_0x38aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAB4u;
        // 0x38aab8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aab4) {
            ctx->pc = 0x38AAC8u;
            goto label_38aac8;
        }
    }
    ctx->pc = 0x38AABCu;
    // 0x38aabc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38aabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aac0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38AAC0u;
    {
        const bool branch_taken_0x38aac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAC0u;
        // 0x38aac4: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aac0) {
            ctx->pc = 0x38AAF4u;
            goto label_38aaf4;
        }
    }
    ctx->pc = 0x38AAC8u;
label_38aac8:
    // 0x38aac8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x38aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38aacc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38AACCu;
    {
        const bool branch_taken_0x38aacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AACCu;
        // 0x38aad0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aacc) {
            ctx->pc = 0x38AAF4u;
            goto label_38aaf4;
        }
    }
    ctx->pc = 0x38AAD4u;
    // 0x38aad4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38aad8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38aadc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x38aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38aae0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38AAE0u;
    {
        const bool branch_taken_0x38aae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAE0u;
        // 0x38aae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aae0) {
            ctx->pc = 0x38AAF4u;
            goto label_38aaf4;
        }
    }
    ctx->pc = 0x38AAE8u;
    // 0x38aae8: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38AAE8u;
    SET_GPR_U32(ctx, 31, 0x38AAF0u);
    ctx->pc = 0x38AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAE8u;
    // 0x38aaec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38AAE8u, 0x38AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAF0u;
label_38aaf0:
    // 0x38aaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38aaf4:
    // 0x38aaf4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38AAF4u;
    {
        const bool branch_taken_0x38aaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAF4u;
        // 0x38aaf8: 0x2626ffff  addiu       $a2, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aaf4) {
            ctx->pc = 0x38AB40u;
            goto label_38ab40;
        }
    }
    ctx->pc = 0x38AAFCu;
    // 0x38aafc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ab00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38ab00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38ab0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x38ab0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38ab10: 0xc0e3896  jal         func_38E258
    ctx->pc = 0x38AB10u;
    SET_GPR_U32(ctx, 31, 0x38AB18u);
    ctx->pc = 0x38AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AB10u;
    // 0x38ab14: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E258u, 0x38AB10u, 0x38AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AB18u;
label_38ab18:
    // 0x38ab18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38AB18u;
    {
        const bool branch_taken_0x38ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB18u;
        // 0x38ab1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab18) {
            ctx->pc = 0x38AB40u;
            goto label_38ab40;
        }
    }
    ctx->pc = 0x38AB20u;
    // 0x38ab20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ab24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38ab28: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38AB28u;
    {
        const bool branch_taken_0x38ab28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38ab28) {
            ctx->pc = 0x38AB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AB28u;
            // 0x38ab2c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AB44u;
            goto label_38ab44;
        }
    }
    ctx->pc = 0x38AB30u;
    // 0x38ab30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ab34: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38ab34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38ab38: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x38ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x38ab3c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x38ab3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_38ab40:
    // 0x38ab40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38ab44:
    // 0x38ab44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38ab44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab48: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x38ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x38ab4c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x38ab4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_38ab50:
    // 0x38ab50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38ab50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38ab54: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38ab54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38ab58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38ab58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ab5c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38ab5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ab60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38ab60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x38AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB64u;
        // 0x38ab68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AB6Cu;
    // 0x38ab6c: 0x0  nop
    ctx->pc = 0x38ab6cu;
    // NOP
    ctx->pc = 0x38ab70u;
}
