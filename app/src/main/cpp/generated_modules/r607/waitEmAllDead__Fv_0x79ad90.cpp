#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: waitEmAllDead__Fv
// Address: 0x79ad90 - 0x79ae00
void waitEmAllDead__Fv_0x79ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x79ad90");
#endif

    switch (ctx->pc) {
        case 0x79ada8u: goto label_79ada8;
        case 0x79adacu: goto label_79adac;
        case 0x79adbcu: goto label_79adbc;
        case 0x79adc4u: goto label_79adc4;
        case 0x79add4u: goto label_79add4;
        case 0x79ade4u: goto label_79ade4;
        default: break;
    }

    ctx->pc = 0x79ad90u;

    // 0x79ad90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ad94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ad98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ad9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79AD9Cu;
    {
        const bool branch_taken_0x79ad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD9Cu;
        // 0x79ada0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad9c) {
            ctx->pc = 0x79ADBCu;
            goto label_79adbc;
        }
    }
    ctx->pc = 0x79ADA4u;
    // 0x79ada4: 0x0  nop
    ctx->pc = 0x79ada4u;
    // NOP
label_79ada8:
    // 0x79ada8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79adac:
    // 0x79adac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79adb0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79adb4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79ADB4u;
    SET_GPR_U32(ctx, 31, 0x79ADBCu);
    ctx->pc = 0x79ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADB4u;
    // 0x79adb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ADB4u, 0x79ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADBCu;
label_79adbc:
    // 0x79adbc: 0xc1e6b98  jal         func_79AE60
    ctx->pc = 0x79ADBCu;
    SET_GPR_U32(ctx, 31, 0x79ADC4u);
    ctx->pc = 0x79AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AE60u, 0x79ADBCu, 0x79ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADC4u;
label_79adc4:
    // 0x79adc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79ADC4u;
    {
        const bool branch_taken_0x79adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC4u;
        // 0x79adc8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc4) {
            ctx->pc = 0x79ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ada8;
        }
    }
    ctx->pc = 0x79ADCCu;
    // 0x79adcc: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79ADCCu;
    SET_GPR_U32(ctx, 31, 0x79ADD4u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79ADCCu, 0x79ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADD4u;
label_79add4:
    // 0x79add4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79ADD4u;
    {
        const bool branch_taken_0x79add4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD4u;
        // 0x79add8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79add4) {
            ctx->pc = 0x79ADACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79adac;
        }
    }
    ctx->pc = 0x79ADDCu;
    // 0x79addc: 0xc1e6bb2  jal         func_79AEC8
    ctx->pc = 0x79ADDCu;
    SET_GPR_U32(ctx, 31, 0x79ADE4u);
    ctx->pc = 0x79AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AEC8u, 0x79ADDCu, 0x79ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADE4u;
label_79ade4:
    // 0x79ade4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x79ADE4u;
    {
        const bool branch_taken_0x79ade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE4u;
        // 0x79ade8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ade4) {
            ctx->pc = 0x79ADACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79adac;
        }
    }
    ctx->pc = 0x79ADECu;
    // 0x79adec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79adecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79adf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79adf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79adf4: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF4u;
        // 0x79adf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADFCu;
    // 0x79adfc: 0x0  nop
    ctx->pc = 0x79adfcu;
    // NOP
    ctx->pc = 0x79ae00u;
}
} // namespace gh_r607
