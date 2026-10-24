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
// Function: waitEmAllDead__Fv
// Address: 0x799830 - 0x7998a0
void waitEmAllDead__Fv_0x799830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x799830");
#endif

    switch (ctx->pc) {
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x79985cu: goto label_79985c;
        case 0x799864u: goto label_799864;
        case 0x799874u: goto label_799874;
        case 0x799884u: goto label_799884;
        default: break;
    }

    ctx->pc = 0x799830u;

    // 0x799830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79983c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79983Cu;
    {
        const bool branch_taken_0x79983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79983Cu;
        // 0x799840: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79983c) {
            ctx->pc = 0x79985Cu;
            goto label_79985c;
        }
    }
    ctx->pc = 0x799844u;
    // 0x799844: 0x0  nop
    ctx->pc = 0x799844u;
    // NOP
label_799848:
    // 0x799848: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79984c:
    // 0x79984c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799850: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799854: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799854u;
    SET_GPR_U32(ctx, 31, 0x79985Cu);
    ctx->pc = 0x799858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799854u;
    // 0x799858: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799854u, 0x79985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79985Cu;
label_79985c:
    // 0x79985c: 0xc1e6640  jal         func_799900
    ctx->pc = 0x79985Cu;
    SET_GPR_U32(ctx, 31, 0x799864u);
    ctx->pc = 0x799900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799900u, 0x79985Cu, 0x799864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799864u;
    {
        const bool branch_taken_0x799864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799864) {
            ctx->pc = 0x799848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799848;
        }
    }
    ctx->pc = 0x79986Cu;
    // 0x79986c: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79986Cu;
    SET_GPR_U32(ctx, 31, 0x799874u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79986Cu, 0x799874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799874u;
    {
        const bool branch_taken_0x799874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799874) {
            ctx->pc = 0x79984Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79984c;
        }
    }
    ctx->pc = 0x79987Cu;
    // 0x79987c: 0xc1e665a  jal         func_799968
    ctx->pc = 0x79987Cu;
    SET_GPR_U32(ctx, 31, 0x799884u);
    ctx->pc = 0x799968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799968u, 0x79987Cu, 0x799884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799884u;
label_799884:
    // 0x799884: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x799884u;
    {
        const bool branch_taken_0x799884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799884u;
        // 0x799888: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799884) {
            ctx->pc = 0x79984Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79984c;
        }
    }
    ctx->pc = 0x79988Cu;
    // 0x79988c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79988cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799894: 0x3e00008  jr          $ra
    ctx->pc = 0x799894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79989Cu;
    // 0x79989c: 0x0  nop
    ctx->pc = 0x79989cu;
    // NOP
    ctx->pc = 0x7998a0u;
}
} // namespace gh_r605
