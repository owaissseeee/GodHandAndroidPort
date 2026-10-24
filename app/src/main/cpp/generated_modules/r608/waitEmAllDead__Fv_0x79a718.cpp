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
// Function: waitEmAllDead__Fv
// Address: 0x79a718 - 0x79a788
void waitEmAllDead__Fv_0x79a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x79a718");
#endif

    switch (ctx->pc) {
        case 0x79a730u: goto label_79a730;
        case 0x79a734u: goto label_79a734;
        case 0x79a744u: goto label_79a744;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a75cu: goto label_79a75c;
        case 0x79a76cu: goto label_79a76c;
        default: break;
    }

    ctx->pc = 0x79a718u;

    // 0x79a718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a71c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a724: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79A724u;
    {
        const bool branch_taken_0x79a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A724u;
        // 0x79a728: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a724) {
            ctx->pc = 0x79A744u;
            goto label_79a744;
        }
    }
    ctx->pc = 0x79A72Cu;
    // 0x79a72c: 0x0  nop
    ctx->pc = 0x79a72cu;
    // NOP
label_79a730:
    // 0x79a730: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a734:
    // 0x79a734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a738: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79a73c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A73Cu;
    SET_GPR_U32(ctx, 31, 0x79A744u);
    ctx->pc = 0x79A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A73Cu;
    // 0x79a740: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A73Cu, 0x79A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A744u;
label_79a744:
    // 0x79a744: 0xc1e69fa  jal         func_79A7E8
    ctx->pc = 0x79A744u;
    SET_GPR_U32(ctx, 31, 0x79A74Cu);
    ctx->pc = 0x79A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7E8u, 0x79A744u, 0x79A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A74Cu;
label_79a74c:
    // 0x79a74c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A74Cu;
    {
        const bool branch_taken_0x79a74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A74Cu;
        // 0x79a750: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a74c) {
            ctx->pc = 0x79A730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A754u;
    // 0x79a754: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79A754u;
    SET_GPR_U32(ctx, 31, 0x79A75Cu);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79A754u, 0x79A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A75Cu;
label_79a75c:
    // 0x79a75c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A75Cu;
    {
        const bool branch_taken_0x79a75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A75Cu;
        // 0x79a760: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a75c) {
            ctx->pc = 0x79A734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a734;
        }
    }
    ctx->pc = 0x79A764u;
    // 0x79a764: 0xc1e6a14  jal         func_79A850
    ctx->pc = 0x79A764u;
    SET_GPR_U32(ctx, 31, 0x79A76Cu);
    ctx->pc = 0x79A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A850u, 0x79A764u, 0x79A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x79A76Cu;
    {
        const bool branch_taken_0x79a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a76c) {
            ctx->pc = 0x79A734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a734;
        }
    }
    ctx->pc = 0x79A774u;
    // 0x79a774: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a77c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A77Cu;
        // 0x79a780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A784u;
    // 0x79a784: 0x0  nop
    ctx->pc = 0x79a784u;
    // NOP
    ctx->pc = 0x79a788u;
}
} // namespace gh_r608
