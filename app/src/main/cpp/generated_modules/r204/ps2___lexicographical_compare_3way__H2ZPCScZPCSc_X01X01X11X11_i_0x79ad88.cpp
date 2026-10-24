#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79ad88 - 0x79ade8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ad88");
#endif

    switch (ctx->pc) {
        case 0x79ada0u: goto label_79ada0;
        default: break;
    }

    ctx->pc = 0x79ad88u;

    // 0x79ad88: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79AD88u;
    {
        const bool branch_taken_0x79ad88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ad88) {
            ctx->pc = 0x79ADC8u;
            goto label_79adc8;
        }
    }
    ctx->pc = 0x79AD90u;
    // 0x79ad90: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AD90u;
    {
        const bool branch_taken_0x79ad90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD90u;
        // 0x79ad94: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad90) {
            ctx->pc = 0x79ADE0u;
            goto label_79ade0;
        }
    }
    ctx->pc = 0x79AD98u;
    // 0x79ad98: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ad98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ad9c: 0x0  nop
    ctx->pc = 0x79ad9cu;
    // NOP
label_79ada0:
    // 0x79ada0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ada0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ada4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ada4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ada8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79ADA8u;
    {
        const bool branch_taken_0x79ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADA8u;
        // 0x79adac: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ada8) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79ADB0u;
    // 0x79adb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79ADB0u;
    {
        const bool branch_taken_0x79adb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADB0u;
        // 0x79adb4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adb0) {
            ctx->pc = 0x79ADD8u;
            goto label_79add8;
        }
    }
    ctx->pc = 0x79ADB8u;
    // 0x79adb8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ADB8u;
    {
        const bool branch_taken_0x79adb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADB8u;
        // 0x79adbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adb8) {
            ctx->pc = 0x79ADC8u;
            goto label_79adc8;
        }
    }
    ctx->pc = 0x79ADC0u;
    // 0x79adc0: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ADC0u;
    {
        const bool branch_taken_0x79adc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79adc0) {
            ctx->pc = 0x79ADC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADC0u;
            // 0x79adc4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ada0;
        }
    }
    ctx->pc = 0x79ADC8u;
label_79adc8:
    // 0x79adc8: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ADC8u;
    {
        const bool branch_taken_0x79adc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC8u;
        // 0x79adcc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc8) {
            ctx->pc = 0x79ADE0u;
            goto label_79ade0;
        }
    }
    ctx->pc = 0x79ADD0u;
label_79add0:
    // 0x79add0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD0u;
        // 0x79add4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADD8u;
label_79add8:
    // 0x79add8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD8u;
        // 0x79addc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADE0u;
label_79ade0:
    // 0x79ade0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE0u;
        // 0x79ade4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADE8u;
}
} // namespace gh_r204
