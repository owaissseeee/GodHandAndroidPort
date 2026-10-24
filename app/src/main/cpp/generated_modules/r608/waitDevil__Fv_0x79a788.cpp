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
// Function: waitDevil__Fv
// Address: 0x79a788 - 0x79a7e8
void waitDevil__Fv_0x79a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x79a788");
#endif

    switch (ctx->pc) {
        case 0x79a7a0u: goto label_79a7a0;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7ccu: goto label_79a7cc;
        default: break;
    }

    ctx->pc = 0x79a788u;

    // 0x79a788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a78c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79A794u;
    {
        const bool branch_taken_0x79a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A794u;
        // 0x79a798: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a794) {
            ctx->pc = 0x79A7B4u;
            goto label_79a7b4;
        }
    }
    ctx->pc = 0x79A79Cu;
    // 0x79a79c: 0x0  nop
    ctx->pc = 0x79a79cu;
    // NOP
label_79a7a0:
    // 0x79a7a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a7a4:
    // 0x79a7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7a8: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79a7ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A7ACu;
    SET_GPR_U32(ctx, 31, 0x79A7B4u);
    ctx->pc = 0x79A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7ACu;
    // 0x79a7b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A7ACu, 0x79A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B4u;
label_79a7b4:
    // 0x79a7b4: 0xc1e69fa  jal         func_79A7E8
    ctx->pc = 0x79A7B4u;
    SET_GPR_U32(ctx, 31, 0x79A7BCu);
    ctx->pc = 0x79A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7E8u, 0x79A7B4u, 0x79A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7BCu;
label_79a7bc:
    // 0x79a7bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A7BCu;
    {
        const bool branch_taken_0x79a7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7BCu;
        // 0x79a7c0: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7bc) {
            ctx->pc = 0x79A7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7a0;
        }
    }
    ctx->pc = 0x79A7C4u;
    // 0x79a7c4: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79A7C4u;
    SET_GPR_U32(ctx, 31, 0x79A7CCu);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79A7C4u, 0x79A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7CCu;
label_79a7cc:
    // 0x79a7cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A7CCu;
    {
        const bool branch_taken_0x79a7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7CCu;
        // 0x79a7d0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7cc) {
            ctx->pc = 0x79A7A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7a4;
        }
    }
    ctx->pc = 0x79A7D4u;
    // 0x79a7d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7DCu;
        // 0x79a7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7E4u;
    // 0x79a7e4: 0x0  nop
    ctx->pc = 0x79a7e4u;
    // NOP
    ctx->pc = 0x79a7e8u;
}
} // namespace gh_r608
