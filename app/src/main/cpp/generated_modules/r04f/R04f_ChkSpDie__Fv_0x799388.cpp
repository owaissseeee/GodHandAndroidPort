#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04f_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04f
{
// Function: R04f_ChkSpDie__Fv
// Address: 0x799388 - 0x799418
void R04f_ChkSpDie__Fv_0x799388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R04f_ChkSpDie__Fv_0x799388");
#endif

    switch (ctx->pc) {
        case 0x7993a0u: goto label_7993a0;
        case 0x7993acu: goto label_7993ac;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993fcu: goto label_7993fc;
        case 0x799408u: goto label_799408;
        default: break;
    }

    ctx->pc = 0x799388u;

    // 0x799388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79938c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799394: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993ACu;
            goto label_7993ac;
        }
    }
    ctx->pc = 0x79939Cu;
    // 0x79939c: 0x0  nop
    ctx->pc = 0x79939cu;
    // NOP
label_7993a0:
    // 0x7993a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993a4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993A4u;
    SET_GPR_U32(ctx, 31, 0x7993ACu);
    ctx->pc = 0x7993A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A4u;
    // 0x7993a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993A4u, 0x7993ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0xc1e6506  jal         func_799418
    ctx->pc = 0x7993ACu;
    SET_GPR_U32(ctx, 31, 0x7993B4u);
    ctx->pc = 0x799418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799418u, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7993B4u;
    {
        const bool branch_taken_0x7993b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b4) {
            ctx->pc = 0x7993A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993a0;
        }
    }
    ctx->pc = 0x7993BCu;
    // 0x7993bc: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x7993BCu;
    SET_GPR_U32(ctx, 31, 0x7993C4u);
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x7993BCu, 0x7993C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C4u;
label_7993c4:
    // 0x7993c4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993c8: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x7993cc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x7993e0: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7993E0u;
    {
        const bool branch_taken_0x7993e0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E0u;
        // 0x7993e4: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e0) {
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x7993E8u;
    // 0x7993e8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993ec: 0x8c628240  lw          $v0, -0x7DC0($v1)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935104)));
    // 0x7993f0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x7993f4: 0xc0b12de  jal         func_2C4B78
    ctx->pc = 0x7993F4u;
    SET_GPR_U32(ctx, 31, 0x7993FCu);
    ctx->pc = 0x7993F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F4u;
    // 0x7993f8: 0xac628240  sw          $v0, -0x7DC0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4B78u, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799400: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79940c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799410: 0x3e00008  jr          $ra
    ctx->pc = 0x799410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799418u;
}
} // namespace gh_r04f
