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
// Function: Rename__7cMcPortPCcT1b
// Address: 0x7c36b8 - 0x7c3718
void Rename__7cMcPortPCcT1b_0x7c36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rename__7cMcPortPCcT1b_0x7c36b8");
#endif

    switch (ctx->pc) {
        case 0x7c36e8u: goto label_7c36e8;
        case 0x7c3700u: goto label_7c3700;
        default: break;
    }

    ctx->pc = 0x7c36b8u;

    // 0x7c36b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c36b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c36bc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x7c36bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c36c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c36c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c36c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x7c36c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c36c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c36c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c36cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x7c36ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c36d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c36d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c36d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c36d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c36d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7c36d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c36dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c36e0: 0xc1f3a2a  jal         func_7CE8A8
    ctx->pc = 0x7C36E0u;
    SET_GPR_U32(ctx, 31, 0x7C36E8u);
    ctx->pc = 0x7C36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C36E0u;
    // 0x7c36e4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CE8A8u, 0x7C36E0u, 0x7C36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C36E8u;
label_7c36e8:
    // 0x7c36e8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C36E8u;
    {
        const bool branch_taken_0x7c36e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C36E8u;
        // 0x7c36ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c36e8) {
            ctx->pc = 0x7C3704u;
            goto label_7c3704;
        }
    }
    ctx->pc = 0x7C36F0u;
    // 0x7c36f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C36F0u;
    {
        const bool branch_taken_0x7c36f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c36f0) {
            ctx->pc = 0x7C36F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C36F0u;
            // 0x7c36f4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3708u;
            goto label_7c3708;
        }
    }
    ctx->pc = 0x7C36F8u;
    // 0x7c36f8: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C36F8u;
    SET_GPR_U32(ctx, 31, 0x7C3700u);
    ctx->pc = 0x7C36FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C36F8u;
    // 0x7c36fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C36F8u, 0x7C3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3700u;
label_7c3700:
    // 0x7c3700: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3704:
    // 0x7c3704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3708:
    // 0x7c3708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c370c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C370Cu;
        // 0x7c3710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3714u;
    // 0x7c3714: 0x0  nop
    ctx->pc = 0x7c3714u;
    // NOP
    ctx->pc = 0x7c3718u;
}
} // namespace gh_mcport
