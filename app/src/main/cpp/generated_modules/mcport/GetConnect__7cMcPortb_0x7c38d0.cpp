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
// Function: GetConnect__7cMcPortb
// Address: 0x7c38d0 - 0x7c3930
void GetConnect__7cMcPortb_0x7c38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetConnect__7cMcPortb_0x7c38d0");
#endif

    switch (ctx->pc) {
        case 0x7c3900u: goto label_7c3900;
        case 0x7c3918u: goto label_7c3918;
        default: break;
    }

    ctx->pc = 0x7c38d0u;

    // 0x7c38d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c38d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c38d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c38d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c38d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c38d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c38dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c38dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c38e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c38e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c38e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7c38e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c38e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c38ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c38ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c38f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c38f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c38f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c38f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c38f8: 0xc1f37c6  jal         func_7CDF18
    ctx->pc = 0x7C38F8u;
    SET_GPR_U32(ctx, 31, 0x7C3900u);
    ctx->pc = 0x7C38FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C38F8u;
    // 0x7c38fc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDF18u, 0x7C38F8u, 0x7C3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3900u;
label_7c3900:
    // 0x7c3900: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3900u;
    {
        const bool branch_taken_0x7c3900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3900u;
        // 0x7c3904: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3900) {
            ctx->pc = 0x7C391Cu;
            goto label_7c391c;
        }
    }
    ctx->pc = 0x7C3908u;
    // 0x7c3908: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3908u;
    {
        const bool branch_taken_0x7c3908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c3908) {
            ctx->pc = 0x7C390Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3908u;
            // 0x7c390c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3920u;
            goto label_7c3920;
        }
    }
    ctx->pc = 0x7C3910u;
    // 0x7c3910: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3910u;
    SET_GPR_U32(ctx, 31, 0x7C3918u);
    ctx->pc = 0x7C3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3910u;
    // 0x7c3914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3910u, 0x7C3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3918u;
label_7c3918:
    // 0x7c3918: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c391c:
    // 0x7c391c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c391cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3920:
    // 0x7c3920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3924: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3924u;
        // 0x7c3928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C392Cu;
    // 0x7c392c: 0x0  nop
    ctx->pc = 0x7c392cu;
    // NOP
    ctx->pc = 0x7c3930u;
}
} // namespace gh_mcport
