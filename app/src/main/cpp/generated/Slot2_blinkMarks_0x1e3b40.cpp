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

// Function: Slot2_blinkMarks
// Address: 0x1e3b40 - 0x1e3c08
void Slot2_blinkMarks_0x1e3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_blinkMarks_0x1e3b40");
#endif

    switch (ctx->pc) {
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be8u: goto label_1e3be8;
        case 0x1e3bf4u: goto label_1e3bf4;
        default: break;
    }

    ctx->pc = 0x1e3b40u;

    // 0x1e3b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3b44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b50: 0x960304a4  lhu         $v1, 0x4A4($s0)
    ctx->pc = 0x1e3b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1188)));
    // 0x1e3b54: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e3b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e3b58: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E3B58u;
    {
        const bool branch_taken_0x1e3b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B58u;
        // 0x1e3b5c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b58) {
            ctx->pc = 0x1E3BF4u;
            goto label_1e3bf4;
        }
    }
    ctx->pc = 0x1E3B60u;
    // 0x1e3b60: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e3b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e3b64: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e3b68: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E3B68u;
    {
        const bool branch_taken_0x1e3b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B68u;
        // 0x1e3b6c: 0xa60304a4  sh          $v1, 0x4A4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1188), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b68) {
            ctx->pc = 0x1E3BF4u;
            goto label_1e3bf4;
        }
    }
    ctx->pc = 0x1E3B70u;
    // 0x1e3b70: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e3b70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e3b74: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3b78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e3b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3b7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3b80: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e3b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3b84: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E3B84u;
    {
        const bool branch_taken_0x1e3b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B84u;
        // 0x1e3b88: 0xa60204a4  sh          $v0, 0x4A4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b84) {
            ctx->pc = 0x1E3BC4u;
            goto label_1e3bc4;
        }
    }
    ctx->pc = 0x1E3B8Cu;
    // 0x1e3b8c: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3b90: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3B90u;
    SET_GPR_U32(ctx, 31, 0x1E3B98u);
    ctx->pc = 0x1E3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B90u;
    // 0x1e3b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3B90u, 0x1E3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B98u;
label_1e3b98:
    // 0x1e3b98: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3b9c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E3BA4u);
    ctx->pc = 0x1E3BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B9Cu;
    // 0x1e3ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3B9Cu, 0x1E3BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BA4u;
label_1e3ba4:
    // 0x1e3ba4: 0x8e04046c  lw          $a0, 0x46C($s0)
    ctx->pc = 0x1e3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1e3ba8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3BA8u;
    SET_GPR_U32(ctx, 31, 0x1E3BB0u);
    ctx->pc = 0x1E3BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BA8u;
    // 0x1e3bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3BA8u, 0x1E3BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BB0u;
label_1e3bb0:
    // 0x1e3bb0: 0x8e040470  lw          $a0, 0x470($s0)
    ctx->pc = 0x1e3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x1e3bb4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3BB4u;
    SET_GPR_U32(ctx, 31, 0x1E3BBCu);
    ctx->pc = 0x1E3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BB4u;
    // 0x1e3bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3BB4u, 0x1E3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BBCu;
label_1e3bbc:
    // 0x1e3bbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3BBCu;
    {
        const bool branch_taken_0x1e3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BBCu;
        // 0x1e3bc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bbc) {
            ctx->pc = 0x1E3BF8u;
            goto label_1e3bf8;
        }
    }
    ctx->pc = 0x1E3BC4u;
label_1e3bc4:
    // 0x1e3bc4: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3bc8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3BC8u;
    SET_GPR_U32(ctx, 31, 0x1E3BD0u);
    ctx->pc = 0x1E3BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BC8u;
    // 0x1e3bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3BC8u, 0x1E3BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BD0u;
label_1e3bd0:
    // 0x1e3bd0: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3bd4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3BD4u;
    SET_GPR_U32(ctx, 31, 0x1E3BDCu);
    ctx->pc = 0x1E3BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BD4u;
    // 0x1e3bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3BD4u, 0x1E3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BDCu;
label_1e3bdc:
    // 0x1e3bdc: 0x8e04046c  lw          $a0, 0x46C($s0)
    ctx->pc = 0x1e3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1e3be0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3BE0u;
    SET_GPR_U32(ctx, 31, 0x1E3BE8u);
    ctx->pc = 0x1E3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BE0u;
    // 0x1e3be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3BE0u, 0x1E3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BE8u;
label_1e3be8:
    // 0x1e3be8: 0x8e040470  lw          $a0, 0x470($s0)
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x1e3bec: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3BECu;
    SET_GPR_U32(ctx, 31, 0x1E3BF4u);
    ctx->pc = 0x1E3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BECu;
    // 0x1e3bf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3BECu, 0x1E3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BF4u;
label_1e3bf4:
    // 0x1e3bf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3bf8:
    // 0x1e3bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BFCu;
        // 0x1e3c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3C04u;
    // 0x1e3c04: 0x0  nop
    ctx->pc = 0x1e3c04u;
    // NOP
    ctx->pc = 0x1e3c08u;
}
