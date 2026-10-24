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
// Function: Mkdir__7cMcPortPCcb
// Address: 0x7c3608 - 0x7c3660
void Mkdir__7cMcPortPCcb_0x7c3608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mkdir__7cMcPortPCcb_0x7c3608");
#endif

    switch (ctx->pc) {
        case 0x7c3634u: goto label_7c3634;
        case 0x7c364cu: goto label_7c364c;
        default: break;
    }

    ctx->pc = 0x7c3608u;

    // 0x7c3608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c360c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x7c360cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3610: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3618: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7c3618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c361c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3624: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7c3624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3628: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c3628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c362c: 0xc1f3638  jal         func_7CD8E0
    ctx->pc = 0x7C362Cu;
    SET_GPR_U32(ctx, 31, 0x7C3634u);
    ctx->pc = 0x7C3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C362Cu;
    // 0x7c3630: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD8E0u, 0x7C362Cu, 0x7C3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3634u;
label_7c3634:
    // 0x7c3634: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3634u;
    {
        const bool branch_taken_0x7c3634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3634u;
        // 0x7c3638: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3634) {
            ctx->pc = 0x7C3650u;
            goto label_7c3650;
        }
    }
    ctx->pc = 0x7C363Cu;
    // 0x7c363c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C363Cu;
    {
        const bool branch_taken_0x7c363c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c363c) {
            ctx->pc = 0x7C3640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C363Cu;
            // 0x7c3640: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3654u;
            goto label_7c3654;
        }
    }
    ctx->pc = 0x7C3644u;
    // 0x7c3644: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3644u;
    SET_GPR_U32(ctx, 31, 0x7C364Cu);
    ctx->pc = 0x7C3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3644u;
    // 0x7c3648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3644u, 0x7C364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C364Cu;
label_7c364c:
    // 0x7c364c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3650:
    // 0x7c3650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3654:
    // 0x7c3654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3658: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3658u;
        // 0x7c365c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3660u;
}
} // namespace gh_mcport
