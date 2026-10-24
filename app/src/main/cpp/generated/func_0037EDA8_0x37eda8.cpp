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

// Function: func_0037EDA8
// Address: 0x37eda8 - 0x37f0e0
void func_0037EDA8_0x37eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037EDA8_0x37eda8");
#endif

    switch (ctx->pc) {
        case 0x37edfcu: goto label_37edfc;
        case 0x37ee3cu: goto label_37ee3c;
        case 0x37ee94u: goto label_37ee94;
        case 0x37eedcu: goto label_37eedc;
        case 0x37ef24u: goto label_37ef24;
        case 0x37ef7cu: goto label_37ef7c;
        case 0x37ef98u: goto label_37ef98;
        case 0x37efa8u: goto label_37efa8;
        case 0x37f044u: goto label_37f044;
        case 0x37f054u: goto label_37f054;
        case 0x37f090u: goto label_37f090;
        default: break;
    }

    ctx->pc = 0x37eda8u;

    // 0x37eda8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37eda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37edac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37edacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37edb0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37edb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37edb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37edb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37edb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37edbc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37edc0: 0x26330318  addiu       $s3, $s1, 0x318
    ctx->pc = 0x37edc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
    // 0x37edc4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37edc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37edcc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37edd0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37edd4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x37edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x37edd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37eddc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x37eddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37ede0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37ede4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37ede8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37edec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EDECu;
    {
        const bool branch_taken_0x37edec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EDECu;
        // 0x37edf0: 0x26340348  addiu       $s4, $s1, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37edec) {
            ctx->pc = 0x37EE04u;
            goto label_37ee04;
        }
    }
    ctx->pc = 0x37EDF4u;
    // 0x37edf4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37EDF4u;
    SET_GPR_U32(ctx, 31, 0x37EDFCu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37EDF4u, 0x37EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EDFCu;
label_37edfc:
    // 0x37edfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37EDFCu;
    {
        const bool branch_taken_0x37edfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EDFCu;
        // 0x37ee00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37edfc) {
            ctx->pc = 0x37EE10u;
            goto label_37ee10;
        }
    }
    ctx->pc = 0x37EE04u;
label_37ee04:
    // 0x37ee04: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37ee08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ee0c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37ee10:
    // 0x37ee10: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x37ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x37ee14: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x37ee14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37ee18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37ee1c: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x37ee1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x37ee20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ee24: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37ee28: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37ee2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EE2Cu;
    {
        const bool branch_taken_0x37ee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ee2c) {
            ctx->pc = 0x37EE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EE2Cu;
            // 0x37ee30: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37EE44u;
            goto label_37ee44;
        }
    }
    ctx->pc = 0x37EE34u;
    // 0x37ee34: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37EE34u;
    SET_GPR_U32(ctx, 31, 0x37EE3Cu);
    ctx->pc = 0x37EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE34u;
    // 0x37ee38: 0x2630003c  addiu       $s0, $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37EE34u, 0x37EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EE3Cu;
label_37ee3c:
    // 0x37ee3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37EE3Cu;
    {
        const bool branch_taken_0x37ee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE3Cu;
        // 0x37ee40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee3c) {
            ctx->pc = 0x37EE50u;
            goto label_37ee50;
        }
    }
    ctx->pc = 0x37EE44u;
label_37ee44:
    // 0x37ee44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ee48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37ee4c: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x37ee4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_37ee50:
    // 0x37ee50: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37ee50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee54: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x37ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37ee58: 0x10520025  beq         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x37EE58u;
    {
        const bool branch_taken_0x37ee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE58u;
        // 0x37ee5c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee58) {
            ctx->pc = 0x37EEF0u;
            goto label_37eef0;
        }
    }
    ctx->pc = 0x37EE60u;
    // 0x37ee60: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x37ee60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x37ee64: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37ee68: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37ee6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ee70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37EE70u;
    {
        const bool branch_taken_0x37ee70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE70u;
        // 0x37ee74: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee70) {
            ctx->pc = 0x37EEC0u;
            goto label_37eec0;
        }
    }
    ctx->pc = 0x37EE78u;
    // 0x37ee78: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37ee7c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ee80: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37ee80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37ee84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EE84u;
    {
        const bool branch_taken_0x37ee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE84u;
        // 0x37ee88: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee84) {
            ctx->pc = 0x37EE9Cu;
            goto label_37ee9c;
        }
    }
    ctx->pc = 0x37EE8Cu;
    // 0x37ee8c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37EE8Cu;
    SET_GPR_U32(ctx, 31, 0x37EE94u);
    ctx->pc = 0x37EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE8Cu;
    // 0x37ee90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37EE8Cu, 0x37EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EE94u;
label_37ee94:
    // 0x37ee94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37EE94u;
    {
        const bool branch_taken_0x37ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE94u;
        // 0x37ee98: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee94) {
            ctx->pc = 0x37EEC4u;
            goto label_37eec4;
        }
    }
    ctx->pc = 0x37EE9Cu;
label_37ee9c:
    // 0x37ee9c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37eea0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37eea4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37eea8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37eeac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37eeb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37eeb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37eeb8: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37eebc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37eec0:
    // 0x37eec0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37eec4:
    // 0x37eec4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37eec8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37eecc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EECCu;
    {
        const bool branch_taken_0x37eecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37eecc) {
            ctx->pc = 0x37EED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EECCu;
            // 0x37eed0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37EEE4u;
            goto label_37eee4;
        }
    }
    ctx->pc = 0x37EED4u;
    // 0x37eed4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37EED4u;
    SET_GPR_U32(ctx, 31, 0x37EEDCu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37EED4u, 0x37EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EEDCu;
label_37eedc:
    // 0x37eedc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37EEDCu;
    {
        const bool branch_taken_0x37eedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EEDCu;
        // 0x37eee0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eedc) {
            ctx->pc = 0x37EEECu;
            goto label_37eeec;
        }
    }
    ctx->pc = 0x37EEE4u;
label_37eee4:
    // 0x37eee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37eee8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37eeec:
    // 0x37eeec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37eef0:
    // 0x37eef0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37eef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37eef4: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37eef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37eef8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37eefc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ef00: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37EF00u;
    {
        const bool branch_taken_0x37ef00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF00u;
        // 0x37ef04: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ef00) {
            ctx->pc = 0x37EF50u;
            goto label_37ef50;
        }
    }
    ctx->pc = 0x37EF08u;
    // 0x37ef08: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37ef0c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ef10: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37ef10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37ef14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EF14u;
    {
        const bool branch_taken_0x37ef14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF14u;
        // 0x37ef18: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ef14) {
            ctx->pc = 0x37EF2Cu;
            goto label_37ef2c;
        }
    }
    ctx->pc = 0x37EF1Cu;
    // 0x37ef1c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37EF1Cu;
    SET_GPR_U32(ctx, 31, 0x37EF24u);
    ctx->pc = 0x37EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF1Cu;
    // 0x37ef20: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37EF1Cu, 0x37EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EF24u;
label_37ef24:
    // 0x37ef24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37EF24u;
    {
        const bool branch_taken_0x37ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF24u;
        // 0x37ef28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ef24) {
            ctx->pc = 0x37EF54u;
            goto label_37ef54;
        }
    }
    ctx->pc = 0x37EF2Cu;
label_37ef2c:
    // 0x37ef2c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37ef30: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37ef34: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37ef38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ef3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37ef40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37ef44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ef48: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37ef4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37ef50:
    // 0x37ef50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x37ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37ef54:
    // 0x37ef54: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37ef58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EF58u;
    {
        const bool branch_taken_0x37ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF58u;
        // 0x37ef5c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ef58) {
            ctx->pc = 0x37EF6Cu;
            goto label_37ef6c;
        }
    }
    ctx->pc = 0x37EF60u;
    // 0x37ef60: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37ef64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37EF64u;
    {
        const bool branch_taken_0x37ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF64u;
        // 0x37ef68: 0x2450c208  addiu       $s0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ef64) {
            ctx->pc = 0x37EF74u;
            goto label_37ef74;
        }
    }
    ctx->pc = 0x37EF6Cu;
label_37ef6c:
    // 0x37ef6c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37ef6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ef70: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x37ef70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37ef74:
    // 0x37ef74: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37EF74u;
    SET_GPR_U32(ctx, 31, 0x37EF7Cu);
    ctx->pc = 0x37EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF74u;
    // 0x37ef78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37EF74u, 0x37EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EF7Cu;
label_37ef7c:
    // 0x37ef7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37ef7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef84: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x37ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x37ef88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37ef88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37ef8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef90: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37EF90u;
    SET_GPR_U32(ctx, 31, 0x37EF98u);
    ctx->pc = 0x37EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF90u;
    // 0x37ef94: 0x8c45fff0  lw          $a1, -0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37EF90u, 0x37EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EF98u;
label_37ef98:
    // 0x37ef98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37ef9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37efa0: 0xc0e06ce  jal         func_381B38
    ctx->pc = 0x37EFA0u;
    SET_GPR_U32(ctx, 31, 0x37EFA8u);
    ctx->pc = 0x37EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EFA0u;
    // 0x37efa4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B38u, 0x37EFA0u, 0x37EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EFA8u;
label_37efa8:
    // 0x37efa8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37EFA8u;
    {
        const bool branch_taken_0x37efa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFA8u;
        // 0x37efac: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37efa8) {
            ctx->pc = 0x37EFF0u;
            goto label_37eff0;
        }
    }
    ctx->pc = 0x37EFB0u;
    // 0x37efb0: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x37efb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37efb4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x37efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37efb8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37efb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37efbc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x37efbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37efc0: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37efc4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37efc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37efcc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x37EFCCu;
    {
        const bool branch_taken_0x37efcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFCCu;
        // 0x37efd0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37efcc) {
            ctx->pc = 0x37F0BCu;
            goto label_37f0bc;
        }
    }
    ctx->pc = 0x37EFD4u;
    // 0x37efd4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37efd8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37efdc: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37efdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37efe0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x37EFE0u;
    {
        const bool branch_taken_0x37efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFE0u;
        // 0x37efe4: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37efe0) {
            ctx->pc = 0x37F088u;
            goto label_37f088;
        }
    }
    ctx->pc = 0x37EFE8u;
    // 0x37efe8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x37EFE8u;
    {
        const bool branch_taken_0x37efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFE8u;
        // 0x37efec: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37efe8) {
            ctx->pc = 0x37F09Cu;
            goto label_37f09c;
        }
    }
    ctx->pc = 0x37EFF0u;
label_37eff0:
    // 0x37eff0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x37eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x37eff4: 0xdc65c210  ld          $a1, -0x3DF0($v1)
    ctx->pc = 0x37eff4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294951440)));
    // 0x37eff8: 0x2464c210  addiu       $a0, $v1, -0x3DF0
    ctx->pc = 0x37eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x37effc: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x37effcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37f000: 0x2447be80  addiu       $a3, $v0, -0x4180
    ctx->pc = 0x37f000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x37f004: 0x9086000a  lbu         $a2, 0xA($a0)
    ctx->pc = 0x37f004u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x37f008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37f008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f00c: 0xfc45be80  sd          $a1, -0x4180($v0)
    ctx->pc = 0x37f00cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x77BE80u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x77BE80u, _value); } while (0);
    // 0x37f010: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x37f010u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77BE88u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x77BE88u, _value); } while (0);
    // 0x37f014: 0xa0e6000a  sb          $a2, 0xA($a3)
    ctx->pc = 0x37f014u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x77BE8Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x77BE8Au, _value); } while (0);
    // 0x37f018: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x37f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x37f01c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f020: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F020u;
    {
        const bool branch_taken_0x37f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F020u;
        // 0x37f024: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f020) {
            ctx->pc = 0x37F034u;
            goto label_37f034;
        }
    }
    ctx->pc = 0x37F028u;
    // 0x37f028: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f02c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F02Cu;
    {
        const bool branch_taken_0x37f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F02Cu;
        // 0x37f030: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f02c) {
            ctx->pc = 0x37F03Cu;
            goto label_37f03c;
        }
    }
    ctx->pc = 0x37F034u;
label_37f034:
    // 0x37f034: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f038: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x37f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_37f03c:
    // 0x37f03c: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x37F03Cu;
    SET_GPR_U32(ctx, 31, 0x37F044u);
    ctx->pc = 0x37F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F03Cu;
    // 0x37f040: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x37F03Cu, 0x37F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F044u;
label_37f044:
    // 0x37f044: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x37f044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x37f048: 0x2605be80  addiu       $a1, $s0, -0x4180
    ctx->pc = 0x37f048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950528));
    // 0x37f04c: 0xc0cb66e  jal         func_32D9B8
    ctx->pc = 0x37F04Cu;
    SET_GPR_U32(ctx, 31, 0x37F054u);
    ctx->pc = 0x37F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F04Cu;
    // 0x37f050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D9B8u, 0x37F04Cu, 0x37F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F054u;
label_37f054:
    // 0x37f054: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37f054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f058: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37f05c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x37f05cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f060: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f064: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f06c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F06Cu;
    {
        const bool branch_taken_0x37f06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F06Cu;
        // 0x37f070: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f06c) {
            ctx->pc = 0x37F0BCu;
            goto label_37f0bc;
        }
    }
    ctx->pc = 0x37F074u;
    // 0x37f074: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f078: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f07c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f080: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F080u;
    {
        const bool branch_taken_0x37f080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F080u;
        // 0x37f084: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f080) {
            ctx->pc = 0x37F098u;
            goto label_37f098;
        }
    }
    ctx->pc = 0x37F088u;
label_37f088:
    // 0x37f088: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F088u;
    SET_GPR_U32(ctx, 31, 0x37F090u);
    ctx->pc = 0x37F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F088u;
    // 0x37f08c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F088u, 0x37F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F090u;
label_37f090:
    // 0x37f090: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F090u;
    {
        const bool branch_taken_0x37f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F090u;
        // 0x37f094: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f090) {
            ctx->pc = 0x37F0C0u;
            goto label_37f0c0;
        }
    }
    ctx->pc = 0x37F098u;
label_37f098:
    // 0x37f098: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_37f09c:
    // 0x37f09c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f0a0: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f0a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f0ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f0b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f0b4: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f0b8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f0bc:
    // 0x37f0bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37f0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37f0c0:
    // 0x37f0c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37f0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37f0c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37f0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37f0c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37f0c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37f0cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37f0ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f0d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x37F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F0D4u;
        // 0x37f0d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F0DCu;
    // 0x37f0dc: 0x0  nop
    ctx->pc = 0x37f0dcu;
    // NOP
    ctx->pc = 0x37f0e0u;
}
