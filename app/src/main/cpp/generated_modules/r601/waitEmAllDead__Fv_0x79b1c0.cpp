#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: waitEmAllDead__Fv
// Address: 0x79b1c0 - 0x79b230
void waitEmAllDead__Fv_0x79b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x79b1c0");
#endif

    switch (ctx->pc) {
        case 0x79b1d8u: goto label_79b1d8;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1ecu: goto label_79b1ec;
        case 0x79b1f4u: goto label_79b1f4;
        case 0x79b204u: goto label_79b204;
        case 0x79b214u: goto label_79b214;
        default: break;
    }

    ctx->pc = 0x79b1c0u;

    // 0x79b1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b1c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b1cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79B1CCu;
    {
        const bool branch_taken_0x79b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1CCu;
        // 0x79b1d0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1cc) {
            ctx->pc = 0x79B1ECu;
            goto label_79b1ec;
        }
    }
    ctx->pc = 0x79B1D4u;
    // 0x79b1d4: 0x0  nop
    ctx->pc = 0x79b1d4u;
    // NOP
label_79b1d8:
    // 0x79b1d8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79b1dc:
    // 0x79b1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b1e0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79b1e4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B1E4u;
    SET_GPR_U32(ctx, 31, 0x79B1ECu);
    ctx->pc = 0x79B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1E4u;
    // 0x79b1e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B1E4u, 0x79B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1ECu;
label_79b1ec:
    // 0x79b1ec: 0xc1e6ca4  jal         func_79B290
    ctx->pc = 0x79B1ECu;
    SET_GPR_U32(ctx, 31, 0x79B1F4u);
    ctx->pc = 0x79B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B290u, 0x79B1ECu, 0x79B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1F4u;
label_79b1f4:
    // 0x79b1f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B1F4u;
    {
        const bool branch_taken_0x79b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1F4u;
        // 0x79b1f8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1f4) {
            ctx->pc = 0x79B1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1d8;
        }
    }
    ctx->pc = 0x79B1FCu;
    // 0x79b1fc: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79B1FCu;
    SET_GPR_U32(ctx, 31, 0x79B204u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79B1FCu, 0x79B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B204u;
label_79b204:
    // 0x79b204: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79B204u;
    {
        const bool branch_taken_0x79b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B204u;
        // 0x79b208: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b204) {
            ctx->pc = 0x79B1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1dc;
        }
    }
    ctx->pc = 0x79B20Cu;
    // 0x79b20c: 0xc1e6cbe  jal         func_79B2F8
    ctx->pc = 0x79B20Cu;
    SET_GPR_U32(ctx, 31, 0x79B214u);
    ctx->pc = 0x79B2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2F8u, 0x79B20Cu, 0x79B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B214u;
label_79b214:
    // 0x79b214: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x79B214u;
    {
        const bool branch_taken_0x79b214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B214u;
        // 0x79b218: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b214) {
            ctx->pc = 0x79B1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1dc;
        }
    }
    ctx->pc = 0x79B21Cu;
    // 0x79b21c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b224: 0x3e00008  jr          $ra
    ctx->pc = 0x79B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B22Cu;
    // 0x79b22c: 0x0  nop
    ctx->pc = 0x79b22cu;
    // NOP
    ctx->pc = 0x79b230u;
}
} // namespace gh_r601
