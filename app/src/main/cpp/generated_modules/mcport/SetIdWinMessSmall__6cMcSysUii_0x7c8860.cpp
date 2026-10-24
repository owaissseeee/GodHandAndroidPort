#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetIdWinMessSmall__6cMcSysUii
// Address: 0x7c8860 - 0x7c88a8
void SetIdWinMessSmall__6cMcSysUii_0x7c8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdWinMessSmall__6cMcSysUii_0x7c8860");
#endif

    switch (ctx->pc) {
        case 0x7c8884u: goto label_7c8884;
        case 0x7c8894u: goto label_7c8894;
        default: break;
    }

    ctx->pc = 0x7c8860u;

    // 0x7c8860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c8864: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c8864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c8868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c8868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c886c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c886cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8870: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c8870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8878: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7c8878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c887c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C887Cu;
    SET_GPR_U32(ctx, 31, 0x7C8884u);
    ctx->pc = 0x7C8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C887Cu;
    // 0x7c8880: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C887Cu, 0x7C8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8884u;
label_7c8884:
    // 0x7c8884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c8884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8888: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7c8888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c888c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C888Cu;
    SET_GPR_U32(ctx, 31, 0x7C8894u);
    ctx->pc = 0x7C8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C888Cu;
    // 0x7c8890: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C888Cu, 0x7C8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8894u;
label_7c8894:
    // 0x7c8894: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c8894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c8898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c889c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c88a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C88A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C88A0u;
        // 0x7c88a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C88A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C88A8u;
}
} // namespace gh_mcport
