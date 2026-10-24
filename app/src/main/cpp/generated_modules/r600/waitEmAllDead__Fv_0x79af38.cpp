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
// Function: waitEmAllDead__Fv
// Address: 0x79af38 - 0x79afa8
void waitEmAllDead__Fv_0x79af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x79af38");
#endif

    switch (ctx->pc) {
        case 0x79af50u: goto label_79af50;
        case 0x79af54u: goto label_79af54;
        case 0x79af64u: goto label_79af64;
        case 0x79af6cu: goto label_79af6c;
        case 0x79af7cu: goto label_79af7c;
        case 0x79af8cu: goto label_79af8c;
        default: break;
    }

    ctx->pc = 0x79af38u;

    // 0x79af38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79af3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79af40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79af40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79af44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79AF44u;
    {
        const bool branch_taken_0x79af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF44u;
        // 0x79af48: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af44) {
            ctx->pc = 0x79AF64u;
            goto label_79af64;
        }
    }
    ctx->pc = 0x79AF4Cu;
    // 0x79af4c: 0x0  nop
    ctx->pc = 0x79af4cu;
    // NOP
label_79af50:
    // 0x79af50: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79af50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79af54:
    // 0x79af54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79af58: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79af5c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AF5Cu;
    SET_GPR_U32(ctx, 31, 0x79AF64u);
    ctx->pc = 0x79AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF5Cu;
    // 0x79af60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AF5Cu, 0x79AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF64u;
label_79af64:
    // 0x79af64: 0xc1e6c02  jal         func_79B008
    ctx->pc = 0x79AF64u;
    SET_GPR_U32(ctx, 31, 0x79AF6Cu);
    ctx->pc = 0x79B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B008u, 0x79AF64u, 0x79AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF6Cu;
label_79af6c:
    // 0x79af6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79AF6Cu;
    {
        const bool branch_taken_0x79af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF6Cu;
        // 0x79af70: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af6c) {
            ctx->pc = 0x79AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af50;
        }
    }
    ctx->pc = 0x79AF74u;
    // 0x79af74: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79AF74u;
    SET_GPR_U32(ctx, 31, 0x79AF7Cu);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79AF74u, 0x79AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF7Cu;
label_79af7c:
    // 0x79af7c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79AF7Cu;
    {
        const bool branch_taken_0x79af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF7Cu;
        // 0x79af80: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af7c) {
            ctx->pc = 0x79AF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af54;
        }
    }
    ctx->pc = 0x79AF84u;
    // 0x79af84: 0xc1e6c1c  jal         func_79B070
    ctx->pc = 0x79AF84u;
    SET_GPR_U32(ctx, 31, 0x79AF8Cu);
    ctx->pc = 0x79B070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B070u, 0x79AF84u, 0x79AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF8Cu;
label_79af8c:
    // 0x79af8c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x79AF8Cu;
    {
        const bool branch_taken_0x79af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF8Cu;
        // 0x79af90: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af8c) {
            ctx->pc = 0x79AF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af54;
        }
    }
    ctx->pc = 0x79AF94u;
    // 0x79af94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79af94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79af98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79af98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79af9c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF9Cu;
        // 0x79afa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AFA4u;
    // 0x79afa4: 0x0  nop
    ctx->pc = 0x79afa4u;
    // NOP
    ctx->pc = 0x79afa8u;
}
} // namespace gh_r600
