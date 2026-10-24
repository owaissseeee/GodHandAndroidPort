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

// Function: ADXT_GetNumSmplObuf
// Address: 0x32ada8 - 0x32ae10
void ADXT_GetNumSmplObuf_0x32ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXT_GetNumSmplObuf_0x32ada8");
#endif

    switch (ctx->pc) {
        case 0x32ada8u: goto label_32ada8;
        case 0x32adacu: goto label_32adac;
        case 0x32adb0u: goto label_32adb0;
        case 0x32adb4u: goto label_32adb4;
        case 0x32adb8u: goto label_32adb8;
        case 0x32adbcu: goto label_32adbc;
        case 0x32adc0u: goto label_32adc0;
        case 0x32adc4u: goto label_32adc4;
        case 0x32adc8u: goto label_32adc8;
        case 0x32adccu: goto label_32adcc;
        case 0x32add0u: goto label_32add0;
        case 0x32add4u: goto label_32add4;
        case 0x32add8u: goto label_32add8;
        case 0x32addcu: goto label_32addc;
        case 0x32ade0u: goto label_32ade0;
        case 0x32ade4u: goto label_32ade4;
        case 0x32ade8u: goto label_32ade8;
        case 0x32adecu: goto label_32adec;
        case 0x32adf0u: goto label_32adf0;
        case 0x32adf4u: goto label_32adf4;
        case 0x32adf8u: goto label_32adf8;
        case 0x32adfcu: goto label_32adfc;
        case 0x32ae00u: goto label_32ae00;
        case 0x32ae04u: goto label_32ae04;
        case 0x32ae08u: goto label_32ae08;
        case 0x32ae0cu: goto label_32ae0c;
        default: break;
    }

    ctx->pc = 0x32ada8u;

label_32ada8:
    // 0x32ada8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_32adac:
    // 0x32adac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32adb0:
    if (ctx->pc == 0x32ADB0u) {
        ctx->pc = 0x32ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADACu;
        // 0x32adb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADB4u;
        goto label_32adb4;
    }
    ctx->pc = 0x32ADACu;
    {
        const bool branch_taken_0x32adac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADACu;
        // 0x32adb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adac) {
            ctx->pc = 0x32ADBCu;
            goto label_32adbc;
        }
    }
    ctx->pc = 0x32ADB4u;
label_32adb4:
    // 0x32adb4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
label_32adb8:
    if (ctx->pc == 0x32ADB8u) {
        ctx->pc = 0x32ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADB4u;
        // 0x32adb8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADBCu;
        goto label_32adbc;
    }
    ctx->pc = 0x32ADB4u;
    {
        const bool branch_taken_0x32adb4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x32ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADB4u;
        // 0x32adb8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adb4) {
            ctx->pc = 0x32ADD0u;
            goto label_32add0;
        }
    }
    ctx->pc = 0x32ADBCu;
label_32adbc:
    // 0x32adbc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32adc0:
    // 0x32adc0: 0xc0cfc4c  jal         func_33F130
label_32adc4:
    if (ctx->pc == 0x32ADC4u) {
        ctx->pc = 0x32ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADC0u;
        // 0x32adc4: 0x24842408  addiu       $a0, $a0, 0x2408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADC8u;
        goto label_32adc8;
    }
    ctx->pc = 0x32ADC0u;
    SET_GPR_U32(ctx, 31, 0x32ADC8u);
    ctx->pc = 0x32ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ADC0u;
    // 0x32adc4: 0x24842408  addiu       $a0, $a0, 0x2408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32ADC0u, 0x32ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADC8u;
label_32adc8:
    // 0x32adc8: 0x1000000e  b           . + 4 + (0xE << 2)
label_32adcc:
    if (ctx->pc == 0x32ADCCu) {
        ctx->pc = 0x32ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADC8u;
        // 0x32adcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADD0u;
        goto label_32add0;
    }
    ctx->pc = 0x32ADC8u;
    {
        const bool branch_taken_0x32adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADC8u;
        // 0x32adcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adc8) {
            ctx->pc = 0x32AE04u;
            goto label_32ae04;
        }
    }
    ctx->pc = 0x32ADD0u;
label_32add0:
    // 0x32add0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32add4:
    // 0x32add4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x32add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32add8:
    // 0x32add8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_32addc:
    if (ctx->pc == 0x32ADDCu) {
        ctx->pc = 0x32ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD8u;
        // 0x32addc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADE0u;
        goto label_32ade0;
    }
    ctx->pc = 0x32ADD8u;
    {
        const bool branch_taken_0x32add8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD8u;
        // 0x32addc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32add8) {
            ctx->pc = 0x32AE00u;
            goto label_32ae00;
        }
    }
    ctx->pc = 0x32ADE0u;
label_32ade0:
    // 0x32ade0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ade4:
    // 0x32ade4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32ade8:
    // 0x32ade8: 0x40f809  jalr        $v0
label_32adec:
    if (ctx->pc == 0x32ADECu) {
        ctx->pc = 0x32ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADE8u;
        // 0x32adec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADF0u;
        goto label_32adf0;
    }
    ctx->pc = 0x32ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32ADF0u);
        ctx->pc = 0x32ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADE8u;
        // 0x32adec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ADE8u, 0x32ADF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32ADF0u;
label_32adf0:
    // 0x32adf0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x32adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_32adf4:
    // 0x32adf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32adf8:
    // 0x32adf8: 0x10000002  b           . + 4 + (0x2 << 2)
label_32adfc:
    if (ctx->pc == 0x32ADFCu) {
        ctx->pc = 0x32ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADF8u;
        // 0x32adfc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE00u;
        goto label_32ae00;
    }
    ctx->pc = 0x32ADF8u;
    {
        const bool branch_taken_0x32adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADF8u;
        // 0x32adfc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adf8) {
            ctx->pc = 0x32AE04u;
            goto label_32ae04;
        }
    }
    ctx->pc = 0x32AE00u;
label_32ae00:
    // 0x32ae00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32ae00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ae04:
    // 0x32ae04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ae08:
    // 0x32ae08: 0x3e00008  jr          $ra
label_32ae0c:
    if (ctx->pc == 0x32AE0Cu) {
        ctx->pc = 0x32AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE08u;
        // 0x32ae0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE10u;
        goto label_fallthrough_0x32ae08;
    }
    ctx->pc = 0x32AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE08u;
        // 0x32ae0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32ae08:
    ctx->pc = 0x32AE10u;
}
