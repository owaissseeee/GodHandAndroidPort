#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: waitDevil__Fv
// Address: 0x799620 - 0x799680
void waitDevil__Fv_0x799620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x799620");
#endif

    switch (ctx->pc) {
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x79964cu: goto label_79964c;
        case 0x799654u: goto label_799654;
        case 0x799664u: goto label_799664;
        default: break;
    }

    ctx->pc = 0x799620u;

    // 0x799620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79962c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79962Cu;
    {
        const bool branch_taken_0x79962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79962Cu;
        // 0x799630: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79962c) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x799634u;
    // 0x799634: 0x0  nop
    ctx->pc = 0x799634u;
    // NOP
label_799638:
    // 0x799638: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79963c:
    // 0x79963c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799640: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799644: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0xc1e65a0  jal         func_799680
    ctx->pc = 0x79964Cu;
    SET_GPR_U32(ctx, 31, 0x799654u);
    ctx->pc = 0x799680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799680u, 0x79964Cu, 0x799654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799654u;
    {
        const bool branch_taken_0x799654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799654u;
        // 0x799658: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799654) {
            ctx->pc = 0x799638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799638;
        }
    }
    ctx->pc = 0x79965Cu;
    // 0x79965c: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79965Cu;
    SET_GPR_U32(ctx, 31, 0x799664u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79965Cu, 0x799664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799664u;
    {
        const bool branch_taken_0x799664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799664u;
        // 0x799668: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799664) {
            ctx->pc = 0x79963Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79963c;
        }
    }
    ctx->pc = 0x79966Cu;
    // 0x79966c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79966cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799674: 0x3e00008  jr          $ra
    ctx->pc = 0x799674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799674u;
        // 0x799678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79967Cu;
    // 0x79967c: 0x0  nop
    ctx->pc = 0x79967cu;
    // NOP
    ctx->pc = 0x799680u;
}
} // namespace gh_r602
