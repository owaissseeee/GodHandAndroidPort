#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mwsfcre_UsrMalloc
// Address: 0x344648 - 0x344680
void mwsfcre_UsrMalloc_0x344648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfcre_UsrMalloc_0x344648");
#endif

    switch (ctx->pc) {
        case 0x344648u: goto label_344648;
        case 0x34464cu: goto label_34464c;
        case 0x344650u: goto label_344650;
        case 0x344654u: goto label_344654;
        case 0x344658u: goto label_344658;
        case 0x34465cu: goto label_34465c;
        case 0x344660u: goto label_344660;
        case 0x344664u: goto label_344664;
        case 0x344668u: goto label_344668;
        case 0x34466cu: goto label_34466c;
        case 0x344670u: goto label_344670;
        case 0x344674u: goto label_344674;
        case 0x344678u: goto label_344678;
        case 0x34467cu: goto label_34467c;
        default: break;
    }

    ctx->pc = 0x344648u;

label_344648:
    // 0x344648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34464c:
    // 0x34464c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_344650:
    // 0x344650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_344654:
    // 0x344654: 0xc0d14ac  jal         func_3452B0
label_344658:
    if (ctx->pc == 0x344658u) {
        ctx->pc = 0x344658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344654u;
        // 0x344658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34465Cu;
        goto label_34465c;
    }
    ctx->pc = 0x344654u;
    SET_GPR_U32(ctx, 31, 0x34465Cu);
    ctx->pc = 0x344658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344654u;
    // 0x344658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x344654u, 0x34465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34465Cu;
label_34465c:
    // 0x34465c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x34465cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_344660:
    // 0x344660: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x344660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_344664:
    // 0x344664: 0x40f809  jalr        $v0
label_344668:
    if (ctx->pc == 0x344668u) {
        ctx->pc = 0x344668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344664u;
        // 0x344668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34466Cu;
        goto label_34466c;
    }
    ctx->pc = 0x344664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34466Cu);
        ctx->pc = 0x344668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344664u;
        // 0x344668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344664u, 0x34466Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34466Cu;
label_34466c:
    // 0x34466c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34466cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344670:
    // 0x344670: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_344674:
    // 0x344674: 0x3e00008  jr          $ra
label_344678:
    if (ctx->pc == 0x344678u) {
        ctx->pc = 0x344678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344674u;
        // 0x344678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34467Cu;
        goto label_34467c;
    }
    ctx->pc = 0x344674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344674u;
        // 0x344678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34467Cu;
label_34467c:
    // 0x34467c: 0x0  nop
    ctx->pc = 0x34467cu;
    // NOP
    ctx->pc = 0x344680u;
}
