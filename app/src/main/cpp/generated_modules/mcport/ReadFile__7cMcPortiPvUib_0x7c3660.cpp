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
// Function: ReadFile__7cMcPortiPvUib
// Address: 0x7c3660 - 0x7c36b8
void ReadFile__7cMcPortiPvUib_0x7c3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFile__7cMcPortiPvUib_0x7c3660");
#endif

    switch (ctx->pc) {
        case 0x7c3688u: goto label_7c3688;
        case 0x7c36a0u: goto label_7c36a0;
        default: break;
    }

    ctx->pc = 0x7c3660u;

    // 0x7c3660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c366c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3670: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7c3670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3674: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x7c3674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3678: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7c3678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c367c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c367cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3680: 0xc1f36da  jal         func_7CDB68
    ctx->pc = 0x7C3680u;
    SET_GPR_U32(ctx, 31, 0x7C3688u);
    ctx->pc = 0x7C3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3680u;
    // 0x7c3684: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDB68u, 0x7C3680u, 0x7C3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3688u;
label_7c3688:
    // 0x7c3688: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3688u;
    {
        const bool branch_taken_0x7c3688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3688u;
        // 0x7c368c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3688) {
            ctx->pc = 0x7C36A4u;
            goto label_7c36a4;
        }
    }
    ctx->pc = 0x7C3690u;
    // 0x7c3690: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3690u;
    {
        const bool branch_taken_0x7c3690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c3690) {
            ctx->pc = 0x7C3694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3690u;
            // 0x7c3694: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C36A8u;
            goto label_7c36a8;
        }
    }
    ctx->pc = 0x7C3698u;
    // 0x7c3698: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3698u;
    SET_GPR_U32(ctx, 31, 0x7C36A0u);
    ctx->pc = 0x7C369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3698u;
    // 0x7c369c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3698u, 0x7C36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C36A0u;
label_7c36a0:
    // 0x7c36a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c36a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c36a4:
    // 0x7c36a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c36a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c36a8:
    // 0x7c36a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c36a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c36ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7C36ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C36ACu;
        // 0x7c36b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C36ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C36B4u;
    // 0x7c36b4: 0x0  nop
    ctx->pc = 0x7c36b4u;
    // NOP
    ctx->pc = 0x7c36b8u;
}
} // namespace gh_mcport
