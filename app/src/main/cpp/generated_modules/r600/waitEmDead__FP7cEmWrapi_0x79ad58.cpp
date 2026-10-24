#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x79ad58 - 0x79ae08
void waitEmDead__FP7cEmWrapi_0x79ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x79ad58");
#endif

    switch (ctx->pc) {
        case 0x79ad88u: goto label_79ad88;
        case 0x79ad98u: goto label_79ad98;
        case 0x79ada4u: goto label_79ada4;
        case 0x79adc8u: goto label_79adc8;
        case 0x79addcu: goto label_79addc;
        default: break;
    }

    ctx->pc = 0x79ad58u;

    // 0x79ad58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79ad5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79ad60: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79ad64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79ad64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad68: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79ad6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79ad6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79ad74: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79ad74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x79ad78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79ad7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79ad80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ad84: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79ad88:
    // 0x79ad88: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x79AD88u;
    {
        const bool branch_taken_0x79ad88 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD88u;
        // 0x79ad8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad88) {
            ctx->pc = 0x79ADC0u;
            goto label_79adc0;
        }
    }
    ctx->pc = 0x79AD90u;
    // 0x79ad90: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x79ad90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad94: 0x0  nop
    ctx->pc = 0x79ad94u;
    // NOP
label_79ad98:
    // 0x79ad98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad9c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AD9Cu;
    SET_GPR_U32(ctx, 31, 0x79ADA4u);
    ctx->pc = 0x79ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD9Cu;
    // 0x79ada0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AD9Cu, 0x79ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADA4u;
label_79ada4:
    // 0x79ada4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79ada4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79ada8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79adac: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79ADACu;
    {
        const bool branch_taken_0x79adac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADACu;
        // 0x79adb0: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adac) {
            ctx->pc = 0x79AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad98;
        }
    }
    ctx->pc = 0x79ADB4u;
    // 0x79adb4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79adb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79adb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ADB8u;
    {
        const bool branch_taken_0x79adb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADB8u;
        // 0x79adbc: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adb8) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79ADC0u;
label_79adc0:
    // 0x79adc0: 0xc1e6c02  jal         func_79B008
    ctx->pc = 0x79ADC0u;
    SET_GPR_U32(ctx, 31, 0x79ADC8u);
    ctx->pc = 0x79B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B008u, 0x79ADC0u, 0x79ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADC8u;
label_79adc8:
    // 0x79adc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79ADC8u;
    {
        const bool branch_taken_0x79adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC8u;
        // 0x79adcc: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc8) {
            ctx->pc = 0x79ADE4u;
            goto label_79ade4;
        }
    }
    ctx->pc = 0x79ADD0u;
label_79add0:
    // 0x79add0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79add0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79add4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79ADD4u;
    SET_GPR_U32(ctx, 31, 0x79ADDCu);
    ctx->pc = 0x79ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADD4u;
    // 0x79add8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ADD4u, 0x79ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADDCu;
label_79addc:
    // 0x79addc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x79ADDCu;
    {
        const bool branch_taken_0x79addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADDCu;
        // 0x79ade0: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79addc) {
            ctx->pc = 0x79AD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad88;
        }
    }
    ctx->pc = 0x79ADE4u;
label_79ade4:
    // 0x79ade4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79ade4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ade8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79ade8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79adec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79adecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79adf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79adf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79adf4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79adf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79adf8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79adf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79adfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79adfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ae00: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE00u;
        // 0x79ae04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE08u;
}
} // namespace gh_r600
