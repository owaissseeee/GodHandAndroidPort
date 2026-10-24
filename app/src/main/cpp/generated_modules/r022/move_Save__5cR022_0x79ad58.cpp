#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_Save__5cR022
// Address: 0x79ad58 - 0x79ae28
void move_Save__5cR022_0x79ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Save__5cR022_0x79ad58");
#endif

    switch (ctx->pc) {
        case 0x79add8u: goto label_79add8;
        default: break;
    }

    ctx->pc = 0x79ad58u;

    // 0x79ad58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ad5c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79ad60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ad64: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x79ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x79ad68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ad6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x79ad70: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x79ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79ad74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AD74u;
    {
        const bool branch_taken_0x79ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD74u;
        // 0x79ad78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad74) {
            ctx->pc = 0x79ADA8u;
            goto label_79ada8;
        }
    }
    ctx->pc = 0x79AD7Cu;
    // 0x79ad7c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x79ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x79ad80: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AD80u;
    {
        const bool branch_taken_0x79ad80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD80u;
        // 0x79ad84: 0x211ba  dsrl        $v0, $v0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad80) {
            ctx->pc = 0x79ADA8u;
            goto label_79ada8;
        }
    }
    ctx->pc = 0x79AD88u;
    // 0x79ad88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79ad8c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x79AD8Cu;
    {
        const bool branch_taken_0x79ad8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD8Cu;
        // 0x79ad90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad8c) {
            ctx->pc = 0x79AE18u;
            goto label_79ae18;
        }
    }
    ctx->pc = 0x79AD94u;
    // 0x79ad94: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x79ad98: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x79ad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x79ad9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79ad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79ada0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ADA0u;
    {
        const bool branch_taken_0x79ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ada0) {
            ctx->pc = 0x79ADA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADA0u;
            // 0x79ada4: 0x86030002  lh          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADB0u;
            goto label_79adb0;
        }
    }
    ctx->pc = 0x79ADA8u;
label_79ada8:
    // 0x79ada8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x79ADA8u;
    {
        const bool branch_taken_0x79ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADA8u;
        // 0x79adac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ada8) {
            ctx->pc = 0x79AE18u;
            goto label_79ae18;
        }
    }
    ctx->pc = 0x79ADB0u;
label_79adb0:
    // 0x79adb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ADB0u;
    {
        const bool branch_taken_0x79adb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADB0u;
        // 0x79adb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adb0) {
            ctx->pc = 0x79ADC8u;
            goto label_79adc8;
        }
    }
    ctx->pc = 0x79ADB8u;
    // 0x79adb8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79ADB8u;
    {
        const bool branch_taken_0x79adb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADB8u;
        // 0x79adbc: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adb8) {
            ctx->pc = 0x79ADE4u;
            goto label_79ade4;
        }
    }
    ctx->pc = 0x79ADC0u;
    // 0x79adc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79ADC0u;
    {
        const bool branch_taken_0x79adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC0u;
        // 0x79adc4: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc0) {
            ctx->pc = 0x79AE04u;
            goto label_79ae04;
        }
    }
    ctx->pc = 0x79ADC8u;
label_79adc8:
    // 0x79adc8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79adcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79adccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79add0: 0xc0afc68  jal         func_2BF1A0
    ctx->pc = 0x79ADD0u;
    SET_GPR_U32(ctx, 31, 0x79ADD8u);
    ctx->pc = 0x79ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADD0u;
    // 0x79add4: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF1A0u, 0x79ADD0u, 0x79ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADD8u;
label_79add8:
    // 0x79add8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x79add8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79addc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79ade0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x79ade0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_79ade4:
    // 0x79ade4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79ade8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79adec: 0x8c437a88  lw          $v1, 0x7A88($v0)
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x79adf0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79adf4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79ADF4u;
    {
        const bool branch_taken_0x79adf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF4u;
        // 0x79adf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adf4) {
            ctx->pc = 0x79AE18u;
            goto label_79ae18;
        }
    }
    ctx->pc = 0x79ADFCu;
    // 0x79adfc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x79adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x79ae00: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_79ae04:
    // 0x79ae04: 0x8ca37a24  lw          $v1, 0x7A24($a1)
    ctx->pc = 0x79ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31268)));
    // 0x79ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79ae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79ae10: 0xaca37a24  sw          $v1, 0x7A24($a1)
    ctx->pc = 0x79ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31268), GPR_U32(ctx, 3));
    // 0x79ae14: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x79ae14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_79ae18:
    // 0x79ae18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ae1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ae1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE20u;
        // 0x79ae24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE28u;
}
} // namespace gh_r022
