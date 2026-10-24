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
// Function: Seek__7cMcPortiiib
// Address: 0x7c3770 - 0x7c37c8
void Seek__7cMcPortiiib_0x7c3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Seek__7cMcPortiiib_0x7c3770");
#endif

    switch (ctx->pc) {
        case 0x7c3798u: goto label_7c3798;
        case 0x7c37b0u: goto label_7c37b0;
        default: break;
    }

    ctx->pc = 0x7c3770u;

    // 0x7c3770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c377c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3780: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7c3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3784: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x7c3784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3788: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7c3788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c378c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3790: 0xc1f3676  jal         func_7CD9D8
    ctx->pc = 0x7C3790u;
    SET_GPR_U32(ctx, 31, 0x7C3798u);
    ctx->pc = 0x7C3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3790u;
    // 0x7c3794: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD9D8u, 0x7C3790u, 0x7C3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3798u;
label_7c3798:
    // 0x7c3798: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3798u;
    {
        const bool branch_taken_0x7c3798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3798u;
        // 0x7c379c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3798) {
            ctx->pc = 0x7C37B4u;
            goto label_7c37b4;
        }
    }
    ctx->pc = 0x7C37A0u;
    // 0x7c37a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C37A0u;
    {
        const bool branch_taken_0x7c37a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c37a0) {
            ctx->pc = 0x7C37A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C37A0u;
            // 0x7c37a4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C37B8u;
            goto label_7c37b8;
        }
    }
    ctx->pc = 0x7C37A8u;
    // 0x7c37a8: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C37A8u;
    SET_GPR_U32(ctx, 31, 0x7C37B0u);
    ctx->pc = 0x7C37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C37A8u;
    // 0x7c37ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C37A8u, 0x7C37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C37B0u;
label_7c37b0:
    // 0x7c37b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c37b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c37b4:
    // 0x7c37b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c37b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c37b8:
    // 0x7c37b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c37b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c37bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C37BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C37BCu;
        // 0x7c37c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C37BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C37C4u;
    // 0x7c37c4: 0x0  nop
    ctx->pc = 0x7c37c4u;
    // NOP
    ctx->pc = 0x7c37c8u;
}
} // namespace gh_mcport
