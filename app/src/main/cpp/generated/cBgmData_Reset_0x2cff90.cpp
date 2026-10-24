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

// Function: cBgmData_Reset
// Address: 0x2cff90 - 0x2d0068
void cBgmData_Reset_0x2cff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_Reset_0x2cff90");
#endif

    switch (ctx->pc) {
        case 0x2cffa4u: goto label_2cffa4;
        case 0x2cffbcu: goto label_2cffbc;
        case 0x2cffc8u: goto label_2cffc8;
        case 0x2cffe0u: goto label_2cffe0;
        case 0x2cfff0u: goto label_2cfff0;
        case 0x2d0004u: goto label_2d0004;
        case 0x2d0018u: goto label_2d0018;
        case 0x2d002cu: goto label_2d002c;
        case 0x2d003cu: goto label_2d003c;
        default: break;
    }

    ctx->pc = 0x2cff90u;

    // 0x2cff90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cff94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cff98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cff9c: 0xc0b40c6  jal         func_2D0318
    ctx->pc = 0x2CFF9Cu;
    SET_GPR_U32(ctx, 31, 0x2CFFA4u);
    ctx->pc = 0x2CFFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF9Cu;
    // 0x2cffa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0318u, 0x2CFF9Cu, 0x2CFFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFA4u;
label_2cffa4:
    // 0x2cffa4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFFA4u;
    {
        const bool branch_taken_0x2cffa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cffa4) {
            ctx->pc = 0x2CFFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFA4u;
            // 0x2cffa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFFC0u;
            goto label_2cffc0;
        }
    }
    ctx->pc = 0x2CFFACu;
    // 0x2cffac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cffacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cffb0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2cffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cffb4: 0xc0803d4  jal         func_200F50
    ctx->pc = 0x2CFFB4u;
    SET_GPR_U32(ctx, 31, 0x2CFFBCu);
    ctx->pc = 0x2CFFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFB4u;
    // 0x2cffb8: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200F50u, 0x2CFFB4u, 0x2CFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFBCu;
label_2cffbc:
    // 0x2cffbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cffc0:
    // 0x2cffc0: 0xc0b40f4  jal         func_2D03D0
    ctx->pc = 0x2CFFC0u;
    SET_GPR_U32(ctx, 31, 0x2CFFC8u);
    ctx->pc = 0x2CFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFC0u;
    // 0x2cffc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03D0u, 0x2CFFC0u, 0x2CFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFC8u;
label_2cffc8:
    // 0x2cffc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cffcc: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CFFCCu;
    {
        const bool branch_taken_0x2cffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cffcc) {
            ctx->pc = 0x2CFFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFCCu;
            // 0x2cffd0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0008u;
            goto label_2d0008;
        }
    }
    ctx->pc = 0x2CFFD4u;
    // 0x2cffd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffd8: 0xc0b40f4  jal         func_2D03D0
    ctx->pc = 0x2CFFD8u;
    SET_GPR_U32(ctx, 31, 0x2CFFE0u);
    ctx->pc = 0x2CFFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFD8u;
    // 0x2cffdc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03D0u, 0x2CFFD8u, 0x2CFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFE0u;
label_2cffe0:
    // 0x2cffe0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFFE0u;
    {
        const bool branch_taken_0x2cffe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cffe0) {
            ctx->pc = 0x2CFFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFE0u;
            // 0x2cffe4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0008u;
            goto label_2d0008;
        }
    }
    ctx->pc = 0x2CFFE8u;
    // 0x2cffe8: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x2CFFE8u;
    SET_GPR_U32(ctx, 31, 0x2CFFF0u);
    ctx->pc = 0x2CFFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFE8u;
    // 0x2cffec: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x2CFFE8u, 0x2CFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFF0u;
label_2cfff0:
    // 0x2cfff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfff4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFFF4u;
    {
        const bool branch_taken_0x2cfff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cfff4) {
            ctx->pc = 0x2CFFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFF4u;
            // 0x2cfff8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0008u;
            goto label_2d0008;
        }
    }
    ctx->pc = 0x2CFFFCu;
    // 0x2cfffc: 0xc0c8bd6  jal         func_322F58
    ctx->pc = 0x2CFFFCu;
    SET_GPR_U32(ctx, 31, 0x2D0004u);
    ctx->pc = 0x322F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F58u, 0x2CFFFCu, 0x2D0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0004u;
label_2d0004:
    // 0x2d0004: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2d0004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d0008:
    // 0x2d0008: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0008u;
    {
        const bool branch_taken_0x2d0008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0008) {
            ctx->pc = 0x2D000Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0008u;
            // 0x2d000c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D001Cu;
            goto label_2d001c;
        }
    }
    ctx->pc = 0x2D0010u;
    // 0x2d0010: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D0010u;
    SET_GPR_U32(ctx, 31, 0x2D0018u);
    ctx->pc = 0x2D0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0010u;
    // 0x2d0014: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D0010u, 0x2D0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0018u;
label_2d0018:
    // 0x2d0018: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2d0018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d001c:
    // 0x2d001c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D001Cu;
    {
        const bool branch_taken_0x2d001c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D001Cu;
        // 0x2d0020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d001c) {
            ctx->pc = 0x2D0030u;
            goto label_2d0030;
        }
    }
    ctx->pc = 0x2D0024u;
    // 0x2d0024: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D0024u;
    SET_GPR_U32(ctx, 31, 0x2D002Cu);
    ctx->pc = 0x2D0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0024u;
    // 0x2d0028: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D0024u, 0x2D002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D002Cu;
label_2d002c:
    // 0x2d002c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d002cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0030:
    // 0x2d0030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0034: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D0034u;
    SET_GPR_U32(ctx, 31, 0x2D003Cu);
    ctx->pc = 0x2D0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0034u;
    // 0x2d0038: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D0034u, 0x2D003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D003Cu;
label_2d003c:
    // 0x2d003c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0040: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2d0040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2d0044: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2d0044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2d0048: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2d0048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2d004c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d004cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0050: 0x9082d070  lbu         $v0, -0x2F90($a0)
    ctx->pc = 0x2d0050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x44D070u));
    // 0x2d0054: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x2d0054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0058: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d0058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d005c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D005Cu;
        // 0x2d0060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0064u;
    // 0x2d0064: 0x0  nop
    ctx->pc = 0x2d0064u;
    // NOP
    ctx->pc = 0x2d0068u;
}
