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
// Function: FileClose__7cMcPortib
// Address: 0x7c3380 - 0x7c33d0
void FileClose__7cMcPortib_0x7c3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileClose__7cMcPortib_0x7c3380");
#endif

    switch (ctx->pc) {
        case 0x7c33a0u: goto label_7c33a0;
        case 0x7c33b8u: goto label_7c33b8;
        default: break;
    }

    ctx->pc = 0x7c3380u;

    // 0x7c3380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c338c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3390: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7c3390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3398: 0xc1f3646  jal         func_7CD918
    ctx->pc = 0x7C3398u;
    SET_GPR_U32(ctx, 31, 0x7C33A0u);
    ctx->pc = 0x7C339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3398u;
    // 0x7c339c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD918u, 0x7C3398u, 0x7C33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C33A0u;
label_7c33a0:
    // 0x7c33a0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C33A0u;
    {
        const bool branch_taken_0x7c33a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C33A0u;
        // 0x7c33a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c33a0) {
            ctx->pc = 0x7C33BCu;
            goto label_7c33bc;
        }
    }
    ctx->pc = 0x7C33A8u;
    // 0x7c33a8: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C33A8u;
    {
        const bool branch_taken_0x7c33a8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x7c33a8) {
            ctx->pc = 0x7C33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C33A8u;
            // 0x7c33ac: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C33C0u;
            goto label_7c33c0;
        }
    }
    ctx->pc = 0x7C33B0u;
    // 0x7c33b0: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C33B0u;
    SET_GPR_U32(ctx, 31, 0x7C33B8u);
    ctx->pc = 0x7C33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C33B0u;
    // 0x7c33b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C33B0u, 0x7C33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C33B8u;
label_7c33b8:
    // 0x7c33b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c33b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c33bc:
    // 0x7c33bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c33bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c33c0:
    // 0x7c33c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c33c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c33c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C33C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C33C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C33C4u;
        // 0x7c33c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C33C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C33CCu;
    // 0x7c33cc: 0x0  nop
    ctx->pc = 0x7c33ccu;
    // NOP
    ctx->pc = 0x7c33d0u;
}
} // namespace gh_mcport
