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
// Function: GetEntSpace__7cMcPortPCcb
// Address: 0x7c3818 - 0x7c3870
void GetEntSpace__7cMcPortPCcb_0x7c3818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntSpace__7cMcPortPCcb_0x7c3818");
#endif

    switch (ctx->pc) {
        case 0x7c3844u: goto label_7c3844;
        case 0x7c385cu: goto label_7c385c;
        default: break;
    }

    ctx->pc = 0x7c3818u;

    // 0x7c3818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c381c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x7c381cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3820: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3828: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7c3828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c382c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7c3834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3838: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c3838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c383c: 0xc1f3ab4  jal         func_7CEAD0
    ctx->pc = 0x7C383Cu;
    SET_GPR_U32(ctx, 31, 0x7C3844u);
    ctx->pc = 0x7C3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C383Cu;
    // 0x7c3840: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CEAD0u, 0x7C383Cu, 0x7C3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3844u;
label_7c3844:
    // 0x7c3844: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3844u;
    {
        const bool branch_taken_0x7c3844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3844u;
        // 0x7c3848: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3844) {
            ctx->pc = 0x7C3860u;
            goto label_7c3860;
        }
    }
    ctx->pc = 0x7C384Cu;
    // 0x7c384c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C384Cu;
    {
        const bool branch_taken_0x7c384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c384c) {
            ctx->pc = 0x7C3850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C384Cu;
            // 0x7c3850: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3864u;
            goto label_7c3864;
        }
    }
    ctx->pc = 0x7C3854u;
    // 0x7c3854: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3854u;
    SET_GPR_U32(ctx, 31, 0x7C385Cu);
    ctx->pc = 0x7C3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3854u;
    // 0x7c3858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3854u, 0x7C385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C385Cu;
label_7c385c:
    // 0x7c385c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c385cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3860:
    // 0x7c3860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3864:
    // 0x7c3864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3868: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3868u;
        // 0x7c386c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3870u;
}
} // namespace gh_mcport
