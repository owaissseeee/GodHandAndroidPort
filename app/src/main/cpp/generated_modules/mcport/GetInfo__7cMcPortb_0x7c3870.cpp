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
// Function: GetInfo__7cMcPortb
// Address: 0x7c3870 - 0x7c38d0
void GetInfo__7cMcPortb_0x7c3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfo__7cMcPortb_0x7c3870");
#endif

    switch (ctx->pc) {
        case 0x7c38a0u: goto label_7c38a0;
        case 0x7c38b8u: goto label_7c38b8;
        default: break;
    }

    ctx->pc = 0x7c3870u;

    // 0x7c3870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3874: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c387c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7c387cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3888: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x7c3888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x7c388c: 0x26270030  addiu       $a3, $s1, 0x30
    ctx->pc = 0x7c388cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x7c3890: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c3890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c3894: 0x26280034  addiu       $t0, $s1, 0x34
    ctx->pc = 0x7c3894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x7c3898: 0xc1f37c6  jal         func_7CDF18
    ctx->pc = 0x7C3898u;
    SET_GPR_U32(ctx, 31, 0x7C38A0u);
    ctx->pc = 0x7C389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3898u;
    // 0x7c389c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDF18u, 0x7C3898u, 0x7C38A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C38A0u;
label_7c38a0:
    // 0x7c38a0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C38A0u;
    {
        const bool branch_taken_0x7c38a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C38A0u;
        // 0x7c38a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c38a0) {
            ctx->pc = 0x7C38BCu;
            goto label_7c38bc;
        }
    }
    ctx->pc = 0x7C38A8u;
    // 0x7c38a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C38A8u;
    {
        const bool branch_taken_0x7c38a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c38a8) {
            ctx->pc = 0x7C38ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C38A8u;
            // 0x7c38ac: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C38C0u;
            goto label_7c38c0;
        }
    }
    ctx->pc = 0x7C38B0u;
    // 0x7c38b0: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C38B0u;
    SET_GPR_U32(ctx, 31, 0x7C38B8u);
    ctx->pc = 0x7C38B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C38B0u;
    // 0x7c38b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C38B0u, 0x7C38B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C38B8u;
label_7c38b8:
    // 0x7c38b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c38b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c38bc:
    // 0x7c38bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c38bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c38c0:
    // 0x7c38c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c38c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c38c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C38C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C38C4u;
        // 0x7c38c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C38C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C38CCu;
    // 0x7c38cc: 0x0  nop
    ctx->pc = 0x7c38ccu;
    // NOP
    ctx->pc = 0x7c38d0u;
}
} // namespace gh_mcport
