#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: __do_global_ctors
// Address: 0x79ad40 - 0x79adf0
void ps2___do_global_ctors_0x79ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79ad40");
#endif

    switch (ctx->pc) {
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad44u: goto label_79ad44;
        case 0x79ad48u: goto label_79ad48;
        case 0x79ad4cu: goto label_79ad4c;
        case 0x79ad50u: goto label_79ad50;
        case 0x79ad54u: goto label_79ad54;
        case 0x79ad58u: goto label_79ad58;
        case 0x79ad5cu: goto label_79ad5c;
        case 0x79ad60u: goto label_79ad60;
        case 0x79ad64u: goto label_79ad64;
        case 0x79ad68u: goto label_79ad68;
        case 0x79ad6cu: goto label_79ad6c;
        case 0x79ad70u: goto label_79ad70;
        case 0x79ad74u: goto label_79ad74;
        case 0x79ad78u: goto label_79ad78;
        case 0x79ad7cu: goto label_79ad7c;
        case 0x79ad80u: goto label_79ad80;
        case 0x79ad84u: goto label_79ad84;
        case 0x79ad88u: goto label_79ad88;
        case 0x79ad8cu: goto label_79ad8c;
        case 0x79ad90u: goto label_79ad90;
        case 0x79ad94u: goto label_79ad94;
        case 0x79ad98u: goto label_79ad98;
        case 0x79ad9cu: goto label_79ad9c;
        case 0x79ada0u: goto label_79ada0;
        case 0x79ada4u: goto label_79ada4;
        case 0x79ada8u: goto label_79ada8;
        case 0x79adacu: goto label_79adac;
        case 0x79adb0u: goto label_79adb0;
        case 0x79adb4u: goto label_79adb4;
        case 0x79adb8u: goto label_79adb8;
        case 0x79adbcu: goto label_79adbc;
        case 0x79adc0u: goto label_79adc0;
        case 0x79adc4u: goto label_79adc4;
        case 0x79adc8u: goto label_79adc8;
        case 0x79adccu: goto label_79adcc;
        case 0x79add0u: goto label_79add0;
        case 0x79add4u: goto label_79add4;
        case 0x79add8u: goto label_79add8;
        case 0x79addcu: goto label_79addc;
        case 0x79ade0u: goto label_79ade0;
        case 0x79ade4u: goto label_79ade4;
        case 0x79ade8u: goto label_79ade8;
        case 0x79adecu: goto label_79adec;
        default: break;
    }

    ctx->pc = 0x79ad40u;

label_79ad40:
    // 0x79ad40: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ad40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79ad44:
    // 0x79ad44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ad44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79ad48:
    // 0x79ad48: 0x8ce5b080  lw          $a1, -0x4F80($a3)
    ctx->pc = 0x79ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946944)));
label_79ad4c:
    // 0x79ad4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ad50:
    // 0x79ad50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79ad54:
    // 0x79ad54: 0x24e3b080  addiu       $v1, $a3, -0x4F80
    ctx->pc = 0x79ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946944));
label_79ad58:
    // 0x79ad58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79ad5c:
    // 0x79ad5c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79ad60:
    if (ctx->pc == 0x79AD60u) {
        ctx->pc = 0x79AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD5Cu;
        // 0x79ad60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD64u;
        goto label_79ad64;
    }
    ctx->pc = 0x79AD5Cu;
    {
        const bool branch_taken_0x79ad5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD5Cu;
        // 0x79ad60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad5c) {
            ctx->pc = 0x79ADA4u;
            goto label_79ada4;
        }
    }
    ctx->pc = 0x79AD64u;
label_79ad64:
    // 0x79ad64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79ad68:
    // 0x79ad68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79ad6c:
    if (ctx->pc == 0x79AD6Cu) {
        ctx->pc = 0x79AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD68u;
        // 0x79ad6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD70u;
        goto label_79ad70;
    }
    ctx->pc = 0x79AD68u;
    {
        const bool branch_taken_0x79ad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD68u;
        // 0x79ad6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad68) {
            ctx->pc = 0x79ADA4u;
            goto label_79ada4;
        }
    }
    ctx->pc = 0x79AD70u;
label_79ad70:
    // 0x79ad70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ad70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ad74:
    // 0x79ad74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79ad74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79ad78:
    // 0x79ad78: 0x24e4b080  addiu       $a0, $a3, -0x4F80
    ctx->pc = 0x79ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946944));
label_79ad7c:
    // 0x79ad7c: 0x0  nop
    ctx->pc = 0x79ad7cu;
    // NOP
label_79ad80:
    // 0x79ad80: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79ad80u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79ad84:
    // 0x79ad84: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79ad88:
    // 0x79ad88: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79ad8c:
    // 0x79ad8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79ad8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79ad90:
    // 0x79ad90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79ad94:
    // 0x79ad94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79ad98:
    // 0x79ad98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ad9c:
    // 0x79ad9c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79ada0:
    if (ctx->pc == 0x79ADA0u) {
        ctx->pc = 0x79ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD9Cu;
        // 0x79ada0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADA4u;
        goto label_79ada4;
    }
    ctx->pc = 0x79AD9Cu;
    {
        const bool branch_taken_0x79ad9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad9c) {
            ctx->pc = 0x79ADA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD9Cu;
            // 0x79ada0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad80;
        }
    }
    ctx->pc = 0x79ADA4u;
label_79ada4:
    // 0x79ada4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79ada4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79ada8:
    // 0x79ada8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79ada8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79adac:
    // 0x79adac: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79adb0:
    if (ctx->pc == 0x79ADB0u) {
        ctx->pc = 0x79ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADACu;
        // 0x79adb0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADB4u;
        goto label_79adb4;
    }
    ctx->pc = 0x79ADACu;
    {
        const bool branch_taken_0x79adac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADACu;
        // 0x79adb0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adac) {
            ctx->pc = 0x79ADDCu;
            goto label_79addc;
        }
    }
    ctx->pc = 0x79ADB4u;
label_79adb4:
    // 0x79adb4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79adb8:
    // 0x79adb8: 0x2442b080  addiu       $v0, $v0, -0x4F80
    ctx->pc = 0x79adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946944));
label_79adbc:
    // 0x79adbc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79adbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79adc0:
    // 0x79adc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79adc4:
    // 0x79adc4: 0x0  nop
    ctx->pc = 0x79adc4u;
    // NOP
label_79adc8:
    // 0x79adc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79adc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79adcc:
    // 0x79adcc: 0x40f809  jalr        $v0
label_79add0:
    if (ctx->pc == 0x79ADD0u) {
        ctx->pc = 0x79ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADCCu;
        // 0x79add0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADD4u;
        goto label_79add4;
    }
    ctx->pc = 0x79ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79ADD4u);
        ctx->pc = 0x79ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADCCu;
        // 0x79add0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADCCu, 0x79ADD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79ADD4u;
label_79add4:
    // 0x79add4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79add8:
    if (ctx->pc == 0x79ADD8u) {
        ctx->pc = 0x79ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD4u;
        // 0x79add8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADDCu;
        goto label_79addc;
    }
    ctx->pc = 0x79ADD4u;
    {
        const bool branch_taken_0x79add4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79add4) {
            ctx->pc = 0x79ADD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADD4u;
            // 0x79add8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79adc8;
        }
    }
    ctx->pc = 0x79ADDCu;
label_79addc:
    // 0x79addc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79ade0:
    // 0x79ade0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79ade0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ade4:
    // 0x79ade4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ade4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ade8:
    // 0x79ade8: 0x3e00008  jr          $ra
label_79adec:
    if (ctx->pc == 0x79ADECu) {
        ctx->pc = 0x79ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE8u;
        // 0x79adec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADF0u;
        goto label_fallthrough_0x79ade8;
    }
    ctx->pc = 0x79ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE8u;
        // 0x79adec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
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
label_fallthrough_0x79ade8:
    ctx->pc = 0x79ADF0u;
}
} // namespace gh_r608
