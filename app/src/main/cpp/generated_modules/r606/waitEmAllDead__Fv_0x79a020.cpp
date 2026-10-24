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
// Function: waitEmAllDead__Fv
// Address: 0x79a020 - 0x79a090
void waitEmAllDead__Fv_0x79a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x79a020");
#endif

    switch (ctx->pc) {
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a054u: goto label_79a054;
        case 0x79a064u: goto label_79a064;
        case 0x79a074u: goto label_79a074;
        default: break;
    }

    ctx->pc = 0x79a020u;

    // 0x79a020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a02c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79A02Cu;
    {
        const bool branch_taken_0x79a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a02c) {
            ctx->pc = 0x79A04Cu;
            goto label_79a04c;
        }
    }
    ctx->pc = 0x79A034u;
    // 0x79a034: 0x0  nop
    ctx->pc = 0x79a034u;
    // NOP
label_79a038:
    // 0x79a038: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a03c:
    // 0x79a03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a040: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79a044: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A044u;
    SET_GPR_U32(ctx, 31, 0x79A04Cu);
    ctx->pc = 0x79A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A044u;
    // 0x79a048: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A044u, 0x79A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A04Cu;
label_79a04c:
    // 0x79a04c: 0xc1e683c  jal         func_79A0F0
    ctx->pc = 0x79A04Cu;
    SET_GPR_U32(ctx, 31, 0x79A054u);
    ctx->pc = 0x79A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0F0u, 0x79A04Cu, 0x79A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A054u;
label_79a054:
    // 0x79a054: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A054u;
    {
        const bool branch_taken_0x79a054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A054u;
        // 0x79a058: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a054) {
            ctx->pc = 0x79A038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a038;
        }
    }
    ctx->pc = 0x79A05Cu;
    // 0x79a05c: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79A05Cu;
    SET_GPR_U32(ctx, 31, 0x79A064u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79A05Cu, 0x79A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A064u;
label_79a064:
    // 0x79a064: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A064u;
    {
        const bool branch_taken_0x79a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A064u;
        // 0x79a068: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a064) {
            ctx->pc = 0x79A03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a03c;
        }
    }
    ctx->pc = 0x79A06Cu;
    // 0x79a06c: 0xc1e6856  jal         func_79A158
    ctx->pc = 0x79A06Cu;
    SET_GPR_U32(ctx, 31, 0x79A074u);
    ctx->pc = 0x79A158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A158u, 0x79A06Cu, 0x79A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A074u;
label_79a074:
    // 0x79a074: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x79A074u;
    {
        const bool branch_taken_0x79a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A074u;
        // 0x79a078: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a074) {
            ctx->pc = 0x79A03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a03c;
        }
    }
    ctx->pc = 0x79A07Cu;
    // 0x79a07c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a084: 0x3e00008  jr          $ra
    ctx->pc = 0x79A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A084u;
        // 0x79a088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A08Cu;
    // 0x79a08c: 0x0  nop
    ctx->pc = 0x79a08cu;
    // NOP
    ctx->pc = 0x79a090u;
}
} // namespace gh_r606
