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

// Function: Slot2_setMarkLayersAt46C
// Address: 0x1e3a98 - 0x1e3b40
void Slot2_setMarkLayersAt46C_0x1e3a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_setMarkLayersAt46C_0x1e3a98");
#endif

    switch (ctx->pc) {
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ae0u: goto label_1e3ae0;
        case 0x1e3aecu: goto label_1e3aec;
        case 0x1e3af8u: goto label_1e3af8;
        case 0x1e3b0cu: goto label_1e3b0c;
        case 0x1e3b18u: goto label_1e3b18;
        case 0x1e3b24u: goto label_1e3b24;
        case 0x1e3b30u: goto label_1e3b30;
        default: break;
    }

    ctx->pc = 0x1e3a98u;

    // 0x1e3a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3aa8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3AA8u;
    {
        const bool branch_taken_0x1e3aa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AA8u;
        // 0x1e3aac: 0xa60004a4  sh          $zero, 0x4A4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3aa8) {
            ctx->pc = 0x1E3AB8u;
            goto label_1e3ab8;
        }
    }
    ctx->pc = 0x1E3AB0u;
    // 0x1e3ab0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e3ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3ab4: 0xa60204a4  sh          $v0, 0x4A4($s0)
    ctx->pc = 0x1e3ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1188), (uint16_t)GPR_U32(ctx, 2));
label_1e3ab8:
    // 0x1e3ab8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3AB8u;
    {
        const bool branch_taken_0x1e3ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AB8u;
        // 0x1e3abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ab8) {
            ctx->pc = 0x1E3B00u;
            goto label_1e3b00;
        }
    }
    ctx->pc = 0x1E3AC0u;
    // 0x1e3ac0: 0x960204a4  lhu         $v0, 0x4A4($s0)
    ctx->pc = 0x1e3ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1188)));
    // 0x1e3ac4: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3ac8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e3ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e3acc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3ACCu;
    SET_GPR_U32(ctx, 31, 0x1E3AD4u);
    ctx->pc = 0x1E3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3ACCu;
    // 0x1e3ad0: 0xa60204a4  sh          $v0, 0x4A4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1188), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3ACCu, 0x1E3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AD4u;
label_1e3ad4:
    // 0x1e3ad4: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3ad8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3AD8u;
    SET_GPR_U32(ctx, 31, 0x1E3AE0u);
    ctx->pc = 0x1E3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AD8u;
    // 0x1e3adc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3AD8u, 0x1E3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AE0u;
label_1e3ae0:
    // 0x1e3ae0: 0x8e04046c  lw          $a0, 0x46C($s0)
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1e3ae4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3AE4u;
    SET_GPR_U32(ctx, 31, 0x1E3AECu);
    ctx->pc = 0x1E3AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AE4u;
    // 0x1e3ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3AE4u, 0x1E3AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AECu;
label_1e3aec:
    // 0x1e3aec: 0x8e040470  lw          $a0, 0x470($s0)
    ctx->pc = 0x1e3aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x1e3af0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3AF0u;
    SET_GPR_U32(ctx, 31, 0x1E3AF8u);
    ctx->pc = 0x1E3AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AF0u;
    // 0x1e3af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3AF0u, 0x1E3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AF8u;
label_1e3af8:
    // 0x1e3af8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3AF8u;
    {
        const bool branch_taken_0x1e3af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AF8u;
        // 0x1e3afc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3af8) {
            ctx->pc = 0x1E3B34u;
            goto label_1e3b34;
        }
    }
    ctx->pc = 0x1E3B00u;
label_1e3b00:
    // 0x1e3b00: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3b04: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3B04u;
    SET_GPR_U32(ctx, 31, 0x1E3B0Cu);
    ctx->pc = 0x1E3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B04u;
    // 0x1e3b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3B04u, 0x1E3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B0Cu;
label_1e3b0c:
    // 0x1e3b0c: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3b10: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3B10u;
    SET_GPR_U32(ctx, 31, 0x1E3B18u);
    ctx->pc = 0x1E3B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B10u;
    // 0x1e3b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3B10u, 0x1E3B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B18u;
label_1e3b18:
    // 0x1e3b18: 0x8e04046c  lw          $a0, 0x46C($s0)
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1e3b1c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E3B24u);
    ctx->pc = 0x1E3B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B1Cu;
    // 0x1e3b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3B1Cu, 0x1E3B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B24u;
label_1e3b24:
    // 0x1e3b24: 0x8e040470  lw          $a0, 0x470($s0)
    ctx->pc = 0x1e3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x1e3b28: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3B28u;
    SET_GPR_U32(ctx, 31, 0x1E3B30u);
    ctx->pc = 0x1E3B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B28u;
    // 0x1e3b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3B28u, 0x1E3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B30u;
label_1e3b30:
    // 0x1e3b30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3b34:
    // 0x1e3b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B38u;
        // 0x1e3b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3B40u;
}
