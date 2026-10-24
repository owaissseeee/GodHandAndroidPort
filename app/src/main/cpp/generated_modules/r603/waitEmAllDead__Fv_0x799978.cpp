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
// Function: waitEmAllDead__Fv
// Address: 0x799978 - 0x7999e8
void waitEmAllDead__Fv_0x799978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x799978");
#endif

    switch (ctx->pc) {
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999acu: goto label_7999ac;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999ccu: goto label_7999cc;
        default: break;
    }

    ctx->pc = 0x799978u;

    // 0x799978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79997c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799984u;
    {
        const bool branch_taken_0x799984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799984) {
            ctx->pc = 0x7999A4u;
            goto label_7999a4;
        }
    }
    ctx->pc = 0x79998Cu;
    // 0x79998c: 0x0  nop
    ctx->pc = 0x79998cu;
    // NOP
label_799990:
    // 0x799990: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799994:
    // 0x799994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799998: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79999c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79999Cu;
    SET_GPR_U32(ctx, 31, 0x7999A4u);
    ctx->pc = 0x7999A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79999Cu;
    // 0x7999a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79999Cu, 0x7999A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A4u;
label_7999a4:
    // 0x7999a4: 0xc1e6692  jal         func_799A48
    ctx->pc = 0x7999A4u;
    SET_GPR_U32(ctx, 31, 0x7999ACu);
    ctx->pc = 0x799A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A48u, 0x7999A4u, 0x7999ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ACu;
label_7999ac:
    // 0x7999ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7999ACu;
    {
        const bool branch_taken_0x7999ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ac) {
            ctx->pc = 0x799990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799990;
        }
    }
    ctx->pc = 0x7999B4u;
    // 0x7999b4: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x7999B4u;
    SET_GPR_U32(ctx, 31, 0x7999BCu);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x7999B4u, 0x7999BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999BCu;
label_7999bc:
    // 0x7999bc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x7999BCu;
    {
        const bool branch_taken_0x7999bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999bc) {
            ctx->pc = 0x799994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799994;
        }
    }
    ctx->pc = 0x7999C4u;
    // 0x7999c4: 0xc1e66ac  jal         func_799AB0
    ctx->pc = 0x7999C4u;
    SET_GPR_U32(ctx, 31, 0x7999CCu);
    ctx->pc = 0x799AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799AB0u, 0x7999C4u, 0x7999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999CCu;
label_7999cc:
    // 0x7999cc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x7999CCu;
    {
        const bool branch_taken_0x7999cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999CCu;
        // 0x7999d0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999cc) {
            ctx->pc = 0x799994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799994;
        }
    }
    ctx->pc = 0x7999D4u;
    // 0x7999d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7999d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7999d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7999dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7999DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999E4u;
    // 0x7999e4: 0x0  nop
    ctx->pc = 0x7999e4u;
    // NOP
    ctx->pc = 0x7999e8u;
}
} // namespace gh_r603
