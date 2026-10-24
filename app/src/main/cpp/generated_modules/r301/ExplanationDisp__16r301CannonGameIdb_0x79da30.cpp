#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ExplanationDisp__16r301CannonGameIdb
// Address: 0x79da30 - 0x79da70
void ExplanationDisp__16r301CannonGameIdb_0x79da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExplanationDisp__16r301CannonGameIdb_0x79da30");
#endif

    switch (ctx->pc) {
        case 0x79da50u: goto label_79da50;
        case 0x79da5cu: goto label_79da5c;
        default: break;
    }

    ctx->pc = 0x79da30u;

    // 0x79da30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79da34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79da34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79da38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79da3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79da3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79da40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79da40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79da44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79da44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79da48: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79DA48u;
    SET_GPR_U32(ctx, 31, 0x79DA50u);
    ctx->pc = 0x79DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DA48u;
    // 0x79da4c: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79DA48u, 0x79DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DA50u;
label_79da50:
    // 0x79da50: 0x260402cc  addiu       $a0, $s0, 0x2CC
    ctx->pc = 0x79da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x79da54: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79DA54u;
    SET_GPR_U32(ctx, 31, 0x79DA5Cu);
    ctx->pc = 0x79DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DA54u;
    // 0x79da58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79DA54u, 0x79DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79DA5Cu;
label_79da5c:
    // 0x79da5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79da5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79da60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79da60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79da64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79da64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79da68: 0x3e00008  jr          $ra
    ctx->pc = 0x79DA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA68u;
        // 0x79da6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DA70u;
}
} // namespace gh_r301
