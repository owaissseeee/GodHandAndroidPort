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
// Function: omakeStatusSet__6cMcSys
// Address: 0x7c9070 - 0x7c90c0
void omakeStatusSet__6cMcSys_0x7c9070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("omakeStatusSet__6cMcSys_0x7c9070");
#endif

    switch (ctx->pc) {
        case 0x7c9090u: goto label_7c9090;
        case 0x7c9098u: goto label_7c9098;
        default: break;
    }

    ctx->pc = 0x7c9070u;

    // 0x7c9070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c9070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c9074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c9074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c9078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c9078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c907c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7c907cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c9084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c9088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c908c: 0x0  nop
    ctx->pc = 0x7c908cu;
    // NOP
label_7c9090:
    // 0x7c9090: 0xc1f2430  jal         func_7C90C0
    ctx->pc = 0x7C9090u;
    SET_GPR_U32(ctx, 31, 0x7C9098u);
    ctx->pc = 0x7C9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9090u;
    // 0x7c9094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C90C0u, 0x7C9090u, 0x7C9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9098u;
label_7c9098:
    // 0x7c9098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x7c9098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7c909c: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x7c909cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c90a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C90A0u;
    {
        const bool branch_taken_0x7c90a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C90A0u;
        // 0x7c90a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c90a0) {
            ctx->pc = 0x7C9090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c9090;
        }
    }
    ctx->pc = 0x7C90A8u;
    // 0x7c90a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c90a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c90ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c90acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c90b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c90b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c90b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C90B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C90B4u;
        // 0x7c90b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C90B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C90BCu;
    // 0x7c90bc: 0x0  nop
    ctx->pc = 0x7c90bcu;
    // NOP
    ctx->pc = 0x7c90c0u;
}
} // namespace gh_mcport
