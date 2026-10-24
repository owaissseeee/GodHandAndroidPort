#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079AD30
// Address: 0x79ad30 - 0x79adf0
void func_0079AD30_0x79ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AD30_0x79ad30");
#endif

    switch (ctx->pc) {
        case 0x79ad54u: goto label_79ad54;
        case 0x79ad78u: goto label_79ad78;
        case 0x79ada8u: goto label_79ada8;
        case 0x79add4u: goto label_79add4;
        case 0x79ade0u: goto label_79ade0;
        default: break;
    }

    ctx->pc = 0x79ad30u;

    // 0x79ad30: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79ad34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ad38: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79ad3c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79ad40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ad44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ad48: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x79ad48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad4c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD4Cu;
    SET_GPR_U32(ctx, 31, 0x79AD54u);
    ctx->pc = 0x79AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD4Cu;
    // 0x79ad50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD4Cu, 0x79AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD54u;
label_79ad54:
    // 0x79ad54: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ad58: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79ad5c: 0x8064de28  lb          $a0, -0x21D8($v1)
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79DE28u));
    // 0x79ad60: 0x2466de28  addiu       $a2, $v1, -0x21D8
    ctx->pc = 0x79ad60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958632));
    // 0x79ad64: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79ad64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79ad68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad6c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AD6Cu;
    {
        const bool branch_taken_0x79ad6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD6Cu;
        // 0x79ad70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad6c) {
            ctx->pc = 0x79ADA0u;
            goto label_79ada0;
        }
    }
    ctx->pc = 0x79AD74u;
    // 0x79ad74: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ad74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79ad78:
    // 0x79ad78: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ad7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ad7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ad80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ad80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ad84: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ad88: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ad88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ad8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AD8Cu;
    {
        const bool branch_taken_0x79ad8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD8Cu;
        // 0x79ad90: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad8c) {
            ctx->pc = 0x79ADA0u;
            goto label_79ada0;
        }
    }
    ctx->pc = 0x79AD94u;
    // 0x79ad94: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ad98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AD98u;
    {
        const bool branch_taken_0x79ad98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad98) {
            ctx->pc = 0x79AD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD98u;
            // 0x79ad9c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad78;
        }
    }
    ctx->pc = 0x79ADA0u;
label_79ada0:
    // 0x79ada0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79ADA0u;
    SET_GPR_U32(ctx, 31, 0x79ADA8u);
    ctx->pc = 0x79ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADA0u;
    // 0x79ada4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79ADA0u, 0x79ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADA8u;
label_79ada8:
    // 0x79ada8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79ADA8u;
    {
        const bool branch_taken_0x79ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADA8u;
        // 0x79adac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ada8) {
            ctx->pc = 0x79ADD4u;
            goto label_79add4;
        }
    }
    ctx->pc = 0x79ADB0u;
    // 0x79adb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79adb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adb4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79adb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79adbc: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x79adbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x79adc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79adc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79adc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79adc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adcc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79ADCCu;
    SET_GPR_U32(ctx, 31, 0x79ADD4u);
    ctx->pc = 0x79ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADCCu;
    // 0x79add0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79ADCCu, 0x79ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADD4u;
label_79add4:
    // 0x79add4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79add8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79ADD8u;
    SET_GPR_U32(ctx, 31, 0x79ADE0u);
    ctx->pc = 0x79ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADD8u;
    // 0x79addc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79ADD8u, 0x79ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADE0u;
label_79ade0:
    // 0x79ade0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79ade0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ade4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ade8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE8u;
        // 0x79adec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
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
}
} // namespace gh_r301
