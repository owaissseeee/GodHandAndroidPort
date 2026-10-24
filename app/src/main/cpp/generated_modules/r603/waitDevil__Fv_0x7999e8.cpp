#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: waitDevil__Fv
// Address: 0x7999e8 - 0x799a48
void waitDevil__Fv_0x7999e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x7999e8");
#endif

    switch (ctx->pc) {
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a14u: goto label_799a14;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a2cu: goto label_799a2c;
        default: break;
    }

    ctx->pc = 0x7999e8u;

    // 0x7999e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7999ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7999ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7999f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7999f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7999f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7999F4u;
    {
        const bool branch_taken_0x7999f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f4) {
            ctx->pc = 0x799A14u;
            goto label_799a14;
        }
    }
    ctx->pc = 0x7999FCu;
    // 0x7999fc: 0x0  nop
    ctx->pc = 0x7999fcu;
    // NOP
label_799a00:
    // 0x799a00: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799a04:
    // 0x799a04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a08: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799a0c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0xc1e6692  jal         func_799A48
    ctx->pc = 0x799A14u;
    SET_GPR_U32(ctx, 31, 0x799A1Cu);
    ctx->pc = 0x799A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A48u, 0x799A14u, 0x799A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A1Cu;
label_799a1c:
    // 0x799a1c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799A1Cu;
    {
        const bool branch_taken_0x799a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a1c) {
            ctx->pc = 0x799A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a00;
        }
    }
    ctx->pc = 0x799A24u;
    // 0x799a24: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799A2Cu;
    {
        const bool branch_taken_0x799a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a2c) {
            ctx->pc = 0x799A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a04;
        }
    }
    ctx->pc = 0x799A34u;
    // 0x799a34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x799A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A44u;
    // 0x799a44: 0x0  nop
    ctx->pc = 0x799a44u;
    // NOP
    ctx->pc = 0x799a48u;
}
} // namespace gh_r603
