#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: waitDevil__Fv
// Address: 0x79ac00 - 0x79ac60
void waitDevil__Fv_0x79ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x79ac00");
#endif

    switch (ctx->pc) {
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac44u: goto label_79ac44;
        default: break;
    }

    ctx->pc = 0x79ac00u;

    // 0x79ac00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ac04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ac08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ac0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79AC0Cu;
    {
        const bool branch_taken_0x79ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC0Cu;
        // 0x79ac10: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac0c) {
            ctx->pc = 0x79AC2Cu;
            goto label_79ac2c;
        }
    }
    ctx->pc = 0x79AC14u;
    // 0x79ac14: 0x0  nop
    ctx->pc = 0x79ac14u;
    // NOP
label_79ac18:
    // 0x79ac18: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79ac1c:
    // 0x79ac1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ac20: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79ac24: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AC24u;
    SET_GPR_U32(ctx, 31, 0x79AC2Cu);
    ctx->pc = 0x79AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC24u;
    // 0x79ac28: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AC24u, 0x79AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC2Cu;
label_79ac2c:
    // 0x79ac2c: 0xc1e6b18  jal         func_79AC60
    ctx->pc = 0x79AC2Cu;
    SET_GPR_U32(ctx, 31, 0x79AC34u);
    ctx->pc = 0x79AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC60u, 0x79AC2Cu, 0x79AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC34u;
label_79ac34:
    // 0x79ac34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79AC34u;
    {
        const bool branch_taken_0x79ac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC34u;
        // 0x79ac38: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac34) {
            ctx->pc = 0x79AC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac18;
        }
    }
    ctx->pc = 0x79AC3Cu;
    // 0x79ac3c: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79AC3Cu;
    SET_GPR_U32(ctx, 31, 0x79AC44u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79AC3Cu, 0x79AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC44u;
label_79ac44:
    // 0x79ac44: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79AC44u;
    {
        const bool branch_taken_0x79ac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC44u;
        // 0x79ac48: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac44) {
            ctx->pc = 0x79AC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac1c;
        }
    }
    ctx->pc = 0x79AC4Cu;
    // 0x79ac4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79ac4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ac50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ac50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC54u;
        // 0x79ac58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC5Cu;
    // 0x79ac5c: 0x0  nop
    ctx->pc = 0x79ac5cu;
    // NOP
    ctx->pc = 0x79ac60u;
}
} // namespace gh_r604
