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
// Function: WriteFile__7cMcPortiPvUib
// Address: 0x7c3718 - 0x7c3770
void WriteFile__7cMcPortiPvUib_0x7c3718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteFile__7cMcPortiPvUib_0x7c3718");
#endif

    switch (ctx->pc) {
        case 0x7c3740u: goto label_7c3740;
        case 0x7c3758u: goto label_7c3758;
        default: break;
    }

    ctx->pc = 0x7c3718u;

    // 0x7c3718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c371c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3724: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3728: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7c3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c372c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x7c372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3730: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7c3730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3738: 0xc1f3c7a  jal         func_7CF1E8
    ctx->pc = 0x7C3738u;
    SET_GPR_U32(ctx, 31, 0x7C3740u);
    ctx->pc = 0x7C373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3738u;
    // 0x7c373c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CF1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CF1E8u, 0x7C3738u, 0x7C3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3740u;
label_7c3740:
    // 0x7c3740: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3740u;
    {
        const bool branch_taken_0x7c3740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3740u;
        // 0x7c3744: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3740) {
            ctx->pc = 0x7C375Cu;
            goto label_7c375c;
        }
    }
    ctx->pc = 0x7C3748u;
    // 0x7c3748: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3748u;
    {
        const bool branch_taken_0x7c3748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c3748) {
            ctx->pc = 0x7C374Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3748u;
            // 0x7c374c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3760u;
            goto label_7c3760;
        }
    }
    ctx->pc = 0x7C3750u;
    // 0x7c3750: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3750u;
    SET_GPR_U32(ctx, 31, 0x7C3758u);
    ctx->pc = 0x7C3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3750u;
    // 0x7c3754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3750u, 0x7C3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3758u;
label_7c3758:
    // 0x7c3758: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c375c:
    // 0x7c375c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c375cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3760:
    // 0x7c3760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3764: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3764u;
        // 0x7c3768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C376Cu;
    // 0x7c376c: 0x0  nop
    ctx->pc = 0x7c376cu;
    // NOP
    ctx->pc = 0x7c3770u;
}
} // namespace gh_mcport
