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

// Function: frame_init
// Address: 0x321e08 - 0x321f48
void frame_init_0x321e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frame_init_0x321e08");
#endif

    switch (ctx->pc) {
        case 0x321e40u: goto label_321e40;
        case 0x321e4cu: goto label_321e4c;
        case 0x321e68u: goto label_321e68;
        case 0x321e7cu: goto label_321e7c;
        case 0x321e88u: goto label_321e88;
        case 0x321ec8u: goto label_321ec8;
        case 0x321ed8u: goto label_321ed8;
        case 0x321f04u: goto label_321f04;
        case 0x321f10u: goto label_321f10;
        default: break;
    }

    ctx->pc = 0x321e08u;

    // 0x321e08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x321e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x321e0c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x321e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x321e10: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x321e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x321e14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x321e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321e18: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x321e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x321e1c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x321e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x321e20: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x321e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x321e24: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x321e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x321e28: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x321e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x321e2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x321E2Cu;
    {
        const bool branch_taken_0x321e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E2Cu;
        // 0x321e30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e2c) {
            ctx->pc = 0x321E60u;
            goto label_321e60;
        }
    }
    ctx->pc = 0x321E34u;
    // 0x321e34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x321e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321e38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x321E38u;
    {
        const bool branch_taken_0x321e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E38u;
        // 0x321e3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e38) {
            ctx->pc = 0x321E6Cu;
            goto label_321e6c;
        }
    }
    ctx->pc = 0x321E40u;
label_321e40:
    // 0x321e40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x321e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321e44: 0xc0c874e  jal         func_321D38
    ctx->pc = 0x321E44u;
    SET_GPR_U32(ctx, 31, 0x321E4Cu);
    ctx->pc = 0x321E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E44u;
    // 0x321e48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D38u, 0x321E44u, 0x321E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E4Cu;
label_321e4c:
    // 0x321e4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x321e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321e50: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x321E50u;
    {
        const bool branch_taken_0x321e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E50u;
        // 0x321e54: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e50) {
            ctx->pc = 0x321E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321e40;
        }
    }
    ctx->pc = 0x321E58u;
    // 0x321e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x321E58u;
    {
        const bool branch_taken_0x321e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E58u;
        // 0x321e5c: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e58) {
            ctx->pc = 0x321E70u;
            goto label_321e70;
        }
    }
    ctx->pc = 0x321E60u;
label_321e60:
    // 0x321e60: 0xc0c874e  jal         func_321D38
    ctx->pc = 0x321E60u;
    SET_GPR_U32(ctx, 31, 0x321E68u);
    ctx->pc = 0x321E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E60u;
    // 0x321e64: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D38u, 0x321E60u, 0x321E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E68u;
label_321e68:
    // 0x321e68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x321e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e6c:
    // 0x321e6c: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x321e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_321e70:
    // 0x321e70: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x321e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x321e74: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x321E74u;
    SET_GPR_U32(ctx, 31, 0x321E7Cu);
    ctx->pc = 0x321E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E74u;
    // 0x321e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x321E74u, 0x321E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E7Cu;
label_321e7c:
    // 0x321e7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x321e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x321e80: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x321E80u;
    SET_GPR_U32(ctx, 31, 0x321E88u);
    ctx->pc = 0x321E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E80u;
    // 0x321e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x321E80u, 0x321E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E88u;
label_321e88:
    // 0x321e88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x321e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x321e8c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x321e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x321e90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x321e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x321e94: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x321e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x321e98: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x321e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x321e9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x321e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x321ea0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x321ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x321ea4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x321EA4u;
    {
        const bool branch_taken_0x321ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x321EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EA4u;
        // 0x321ea8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ea4) {
            ctx->pc = 0x321EF0u;
            goto label_321ef0;
        }
    }
    ctx->pc = 0x321EACu;
    // 0x321eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321eb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x321eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321eb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x321EB4u;
    {
        const bool branch_taken_0x321eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EB4u;
        // 0x321eb8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321eb4) {
            ctx->pc = 0x321F04u;
            goto label_321f04;
        }
    }
    ctx->pc = 0x321EBCu;
    // 0x321ebc: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x321ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x321ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x321ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321ec4: 0x0  nop
    ctx->pc = 0x321ec4u;
    // NOP
label_321ec8:
    // 0x321ec8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ecc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x321eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ed0: 0xc0c8760  jal         func_321D80
    ctx->pc = 0x321ED0u;
    SET_GPR_U32(ctx, 31, 0x321ED8u);
    ctx->pc = 0x321ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321ED0u;
    // 0x321ed4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D80u, 0x321ED0u, 0x321ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321ED8u;
label_321ed8:
    // 0x321ed8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x321ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x321edc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x321edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321ee0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x321EE0u;
    {
        const bool branch_taken_0x321ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321ee0) {
            ctx->pc = 0x321EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321EE0u;
            // 0x321ee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321ec8;
        }
    }
    ctx->pc = 0x321EE8u;
    // 0x321ee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321EE8u;
    {
        const bool branch_taken_0x321ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EE8u;
        // 0x321eec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ee8) {
            ctx->pc = 0x321F08u;
            goto label_321f08;
        }
    }
    ctx->pc = 0x321EF0u;
label_321ef0:
    // 0x321ef0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x321ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x321ef4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ef8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x321ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x321efc: 0xc0c8760  jal         func_321D80
    ctx->pc = 0x321EFCu;
    SET_GPR_U32(ctx, 31, 0x321F04u);
    ctx->pc = 0x321F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321EFCu;
    // 0x321f00: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D80u, 0x321EFCu, 0x321F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F04u;
label_321f04:
    // 0x321f04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x321f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_321f08:
    // 0x321f08: 0xc0c86b4  jal         func_321AD0
    ctx->pc = 0x321F08u;
    SET_GPR_U32(ctx, 31, 0x321F10u);
    ctx->pc = 0x321F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F08u;
    // 0x321f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AD0u, 0x321F08u, 0x321F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F10u;
label_321f10:
    // 0x321f10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x321f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321f14: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x321f18: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x321f18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x321f1c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x321f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x321f20: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x321f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x321f24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x321f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x321f28: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x321f28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x321f2c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x321f2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321f30: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x321f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321f34: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x321f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321f38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x321f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x321F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F3Cu;
        // 0x321f40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F44u;
    // 0x321f44: 0x0  nop
    ctx->pc = 0x321f44u;
    // NOP
    ctx->pc = 0x321f48u;
}
