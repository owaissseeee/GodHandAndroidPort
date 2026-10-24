#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: waitEmAllDead__Fv
// Address: 0x79ab90 - 0x79ac00
void waitEmAllDead__Fv_0x79ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x79ab90");
#endif

    switch (ctx->pc) {
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abd4u: goto label_79abd4;
        case 0x79abe4u: goto label_79abe4;
        default: break;
    }

    ctx->pc = 0x79ab90u;

    // 0x79ab90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ab94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ab98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ab9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79AB9Cu;
    {
        const bool branch_taken_0x79ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB9Cu;
        // 0x79aba0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab9c) {
            ctx->pc = 0x79ABBCu;
            goto label_79abbc;
        }
    }
    ctx->pc = 0x79ABA4u;
    // 0x79aba4: 0x0  nop
    ctx->pc = 0x79aba4u;
    // NOP
label_79aba8:
    // 0x79aba8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79abac:
    // 0x79abac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79abb0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79abb4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79ABB4u;
    SET_GPR_U32(ctx, 31, 0x79ABBCu);
    ctx->pc = 0x79ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABB4u;
    // 0x79abb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ABB4u, 0x79ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABBCu;
label_79abbc:
    // 0x79abbc: 0xc1e6b18  jal         func_79AC60
    ctx->pc = 0x79ABBCu;
    SET_GPR_U32(ctx, 31, 0x79ABC4u);
    ctx->pc = 0x79AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC60u, 0x79ABBCu, 0x79ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABC4u;
label_79abc4:
    // 0x79abc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79ABC4u;
    {
        const bool branch_taken_0x79abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC4u;
        // 0x79abc8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc4) {
            ctx->pc = 0x79ABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aba8;
        }
    }
    ctx->pc = 0x79ABCCu;
    // 0x79abcc: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79ABCCu;
    SET_GPR_U32(ctx, 31, 0x79ABD4u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79ABCCu, 0x79ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABD4u;
label_79abd4:
    // 0x79abd4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79ABD4u;
    {
        const bool branch_taken_0x79abd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD4u;
        // 0x79abd8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd4) {
            ctx->pc = 0x79ABACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abac;
        }
    }
    ctx->pc = 0x79ABDCu;
    // 0x79abdc: 0xc1e6b32  jal         func_79ACC8
    ctx->pc = 0x79ABDCu;
    SET_GPR_U32(ctx, 31, 0x79ABE4u);
    ctx->pc = 0x79ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79ACC8u, 0x79ABDCu, 0x79ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABE4u;
label_79abe4:
    // 0x79abe4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x79ABE4u;
    {
        const bool branch_taken_0x79abe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE4u;
        // 0x79abe8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe4) {
            ctx->pc = 0x79ABACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abac;
        }
    }
    ctx->pc = 0x79ABECu;
    // 0x79abec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79abecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79abf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79abf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79abf4: 0x3e00008  jr          $ra
    ctx->pc = 0x79ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABF4u;
        // 0x79abf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ABFCu;
    // 0x79abfc: 0x0  nop
    ctx->pc = 0x79abfcu;
    // NOP
    ctx->pc = 0x79ac00u;
}
} // namespace gh_r604
