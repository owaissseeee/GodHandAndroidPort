#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __fpcmp_parts_f
// Address: 0x79ada8 - 0x79aec0
void ps2___fpcmp_parts_f_0x79ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_f_0x79ada8");
#endif

    switch (ctx->pc) {
        case 0x79adf0u: goto label_79adf0;
        case 0x79ae60u: goto label_79ae60;
        case 0x79ae8cu: goto label_79ae8c;
        default: break;
    }

    ctx->pc = 0x79ada8u;

    // 0x79ada8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79adac: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79adacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79adb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ADB0u;
    {
        const bool branch_taken_0x79adb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79adb0) {
            ctx->pc = 0x79ADC8u;
            goto label_79adc8;
        }
    }
    ctx->pc = 0x79ADB8u;
    // 0x79adb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79adbc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79adbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79adc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ADC0u;
    {
        const bool branch_taken_0x79adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC0u;
        // 0x79adc4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc0) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79ADC8u;
label_79adc8:
    // 0x79adc8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC8u;
        // 0x79adcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADD0u;
label_79add0:
    // 0x79add0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79ADD0u;
    {
        const bool branch_taken_0x79add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD0u;
        // 0x79add4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79add0) {
            ctx->pc = 0x79AE00u;
            goto label_79ae00;
        }
    }
    ctx->pc = 0x79ADD8u;
    // 0x79add8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ADD8u;
    {
        const bool branch_taken_0x79add8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79add8) {
            ctx->pc = 0x79ADDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADD8u;
            // 0x79addc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADF0u;
            goto label_79adf0;
        }
    }
    ctx->pc = 0x79ADE0u;
    // 0x79ade0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79ade4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79ade8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE8u;
        // 0x79adec: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADF0u;
label_79adf0:
    // 0x79adf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79adf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79adf8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF8u;
        // 0x79adfc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE00u;
label_79ae00:
    // 0x79ae00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AE00u;
    {
        const bool branch_taken_0x79ae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ae00) {
            ctx->pc = 0x79AE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE00u;
            // 0x79ae04: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE1Cu;
            goto label_79ae1c;
        }
    }
    ctx->pc = 0x79AE08u;
    // 0x79ae08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79ae0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae14: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE14u;
        // 0x79ae18: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE1Cu;
label_79ae1c:
    // 0x79ae1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AE1Cu;
    {
        const bool branch_taken_0x79ae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE1Cu;
        // 0x79ae20: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae1c) {
            ctx->pc = 0x79AE44u;
            goto label_79ae44;
        }
    }
    ctx->pc = 0x79AE24u;
    // 0x79ae24: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE24u;
    {
        const bool branch_taken_0x79ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ae24) {
            ctx->pc = 0x79AE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE24u;
            // 0x79ae28: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE34u;
            goto label_79ae34;
        }
    }
    ctx->pc = 0x79AE2Cu;
    // 0x79ae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE2Cu;
        // 0x79ae30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE34u;
label_79ae34:
    // 0x79ae34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE3Cu;
        // 0x79ae40: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE44u;
label_79ae44:
    // 0x79ae44: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79AE44u;
    {
        const bool branch_taken_0x79ae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae44) {
            ctx->pc = 0x79AE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE44u;
            // 0x79ae48: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79adf0;
        }
    }
    ctx->pc = 0x79AE4Cu;
    // 0x79ae4c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x79ae4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79ae50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79ae54: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AE54u;
    {
        const bool branch_taken_0x79ae54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x79ae54) {
            ctx->pc = 0x79AE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE54u;
            // 0x79ae58: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE6Cu;
            goto label_79ae6c;
        }
    }
    ctx->pc = 0x79AE5Cu;
    // 0x79ae5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ae60:
    // 0x79ae60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae64: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE64u;
        // 0x79ae68: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE6Cu;
label_79ae6c:
    // 0x79ae6c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x79ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79ae70: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x79ae70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x79ae74: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79AE74u;
    {
        const bool branch_taken_0x79ae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ae74) {
            ctx->pc = 0x79AE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE74u;
            // 0x79ae78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae60;
        }
    }
    ctx->pc = 0x79AE7Cu;
    // 0x79ae7c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x79ae7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ae80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AE80u;
    {
        const bool branch_taken_0x79ae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae80) {
            ctx->pc = 0x79AE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE80u;
            // 0x79ae84: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE98u;
            goto label_79ae98;
        }
    }
    ctx->pc = 0x79AE88u;
    // 0x79ae88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ae8c:
    // 0x79ae8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae90: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE90u;
        // 0x79ae94: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE98u;
label_79ae98:
    // 0x79ae98: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x79ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x79ae9c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x79ae9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79aea0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79AEA0u;
    {
        const bool branch_taken_0x79aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aea0) {
            ctx->pc = 0x79AEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEA0u;
            // 0x79aea4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae60;
        }
    }
    ctx->pc = 0x79AEA8u;
    // 0x79aea8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x79aea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79aeac: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AEACu;
    {
        const bool branch_taken_0x79aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEACu;
        // 0x79aeb0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aeac) {
            ctx->pc = 0x79AE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae8c;
        }
    }
    ctx->pc = 0x79AEB4u;
    // 0x79aeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x79AEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEB4u;
        // 0x79aeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AEBCu;
    // 0x79aebc: 0x0  nop
    ctx->pc = 0x79aebcu;
    // NOP
    ctx->pc = 0x79aec0u;
}
} // namespace gh_r505
