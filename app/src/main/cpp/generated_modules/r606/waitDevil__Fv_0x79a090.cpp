#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: waitDevil__Fv
// Address: 0x79a090 - 0x79a0f0
void waitDevil__Fv_0x79a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x79a090");
#endif

    switch (ctx->pc) {
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0d4u: goto label_79a0d4;
        default: break;
    }

    ctx->pc = 0x79a090u;

    // 0x79a090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a09c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A0BCu;
            goto label_79a0bc;
        }
    }
    ctx->pc = 0x79A0A4u;
    // 0x79a0a4: 0x0  nop
    ctx->pc = 0x79a0a4u;
    // NOP
label_79a0a8:
    // 0x79a0a8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a0ac:
    // 0x79a0ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0b0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79a0b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0B4u;
    SET_GPR_U32(ctx, 31, 0x79A0BCu);
    ctx->pc = 0x79A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B4u;
    // 0x79a0b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0B4u, 0x79A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0BCu;
label_79a0bc:
    // 0x79a0bc: 0xc1e683c  jal         func_79A0F0
    ctx->pc = 0x79A0BCu;
    SET_GPR_U32(ctx, 31, 0x79A0C4u);
    ctx->pc = 0x79A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0F0u, 0x79A0BCu, 0x79A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C4u;
label_79a0c4:
    // 0x79a0c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A0C4u;
    {
        const bool branch_taken_0x79a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C4u;
        // 0x79a0c8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0c4) {
            ctx->pc = 0x79A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0a8;
        }
    }
    ctx->pc = 0x79A0CCu;
    // 0x79a0cc: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79A0CCu;
    SET_GPR_U32(ctx, 31, 0x79A0D4u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79A0CCu, 0x79A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D4u;
label_79a0d4:
    // 0x79a0d4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A0D4u;
    {
        const bool branch_taken_0x79a0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D4u;
        // 0x79a0d8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d4) {
            ctx->pc = 0x79A0ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0ac;
        }
    }
    ctx->pc = 0x79A0DCu;
    // 0x79a0dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E4u;
        // 0x79a0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0ECu;
    // 0x79a0ec: 0x0  nop
    ctx->pc = 0x79a0ecu;
    // NOP
    ctx->pc = 0x79a0f0u;
}
} // namespace gh_r606
