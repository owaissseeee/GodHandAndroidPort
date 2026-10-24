#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: waitDevil__Fv
// Address: 0x7998a0 - 0x799900
void waitDevil__Fv_0x7998a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x7998a0");
#endif

    switch (ctx->pc) {
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998e4u: goto label_7998e4;
        default: break;
    }

    ctx->pc = 0x7998a0u;

    // 0x7998a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7998a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7998a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7998a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7998a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7998ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x7998CCu;
            goto label_7998cc;
        }
    }
    ctx->pc = 0x7998B4u;
    // 0x7998b4: 0x0  nop
    ctx->pc = 0x7998b4u;
    // NOP
label_7998b8:
    // 0x7998b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7998bc:
    // 0x7998bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998c0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x7998c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0xc1e6640  jal         func_799900
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x799900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799900u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7998D4u;
    {
        const bool branch_taken_0x7998d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D4u;
        // 0x7998d8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d4) {
            ctx->pc = 0x7998B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998b8;
        }
    }
    ctx->pc = 0x7998DCu;
    // 0x7998dc: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x7998E4u;
    {
        const bool branch_taken_0x7998e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E4u;
        // 0x7998e8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e4) {
            ctx->pc = 0x7998BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998bc;
        }
    }
    ctx->pc = 0x7998ECu;
    // 0x7998ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7998ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7998f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7998f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7998F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998FCu;
    // 0x7998fc: 0x0  nop
    ctx->pc = 0x7998fcu;
    // NOP
    ctx->pc = 0x799900u;
}
} // namespace gh_r605
