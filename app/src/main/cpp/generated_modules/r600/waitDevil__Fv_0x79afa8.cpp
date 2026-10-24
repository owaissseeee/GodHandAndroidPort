#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: waitDevil__Fv
// Address: 0x79afa8 - 0x79b008
void waitDevil__Fv_0x79afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x79afa8");
#endif

    switch (ctx->pc) {
        case 0x79afc0u: goto label_79afc0;
        case 0x79afc4u: goto label_79afc4;
        case 0x79afd4u: goto label_79afd4;
        case 0x79afdcu: goto label_79afdc;
        case 0x79afecu: goto label_79afec;
        default: break;
    }

    ctx->pc = 0x79afa8u;

    // 0x79afa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79afac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79afb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79afb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79AFB4u;
    {
        const bool branch_taken_0x79afb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB4u;
        // 0x79afb8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afb4) {
            ctx->pc = 0x79AFD4u;
            goto label_79afd4;
        }
    }
    ctx->pc = 0x79AFBCu;
    // 0x79afbc: 0x0  nop
    ctx->pc = 0x79afbcu;
    // NOP
label_79afc0:
    // 0x79afc0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79afc4:
    // 0x79afc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79afc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79afc8: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79afcc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AFCCu;
    SET_GPR_U32(ctx, 31, 0x79AFD4u);
    ctx->pc = 0x79AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFCCu;
    // 0x79afd0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AFCCu, 0x79AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFD4u;
label_79afd4:
    // 0x79afd4: 0xc1e6c02  jal         func_79B008
    ctx->pc = 0x79AFD4u;
    SET_GPR_U32(ctx, 31, 0x79AFDCu);
    ctx->pc = 0x79B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B008u, 0x79AFD4u, 0x79AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFDCu;
label_79afdc:
    // 0x79afdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79AFDCu;
    {
        const bool branch_taken_0x79afdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFDCu;
        // 0x79afe0: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afdc) {
            ctx->pc = 0x79AFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afc0;
        }
    }
    ctx->pc = 0x79AFE4u;
    // 0x79afe4: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79AFE4u;
    SET_GPR_U32(ctx, 31, 0x79AFECu);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79AFE4u, 0x79AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFECu;
label_79afec:
    // 0x79afec: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79AFECu;
    {
        const bool branch_taken_0x79afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFECu;
        // 0x79aff0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afec) {
            ctx->pc = 0x79AFC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afc4;
        }
    }
    ctx->pc = 0x79AFF4u;
    // 0x79aff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79aff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79affc: 0x3e00008  jr          $ra
    ctx->pc = 0x79AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFFCu;
        // 0x79b000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B004u;
    // 0x79b004: 0x0  nop
    ctx->pc = 0x79b004u;
    // NOP
    ctx->pc = 0x79b008u;
}
} // namespace gh_r600
