#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __make_dp
// Address: 0x79d778 - 0x79d7a8
void ps2___make_dp_0x79d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_dp_0x79d778");
#endif

    switch (ctx->pc) {
        case 0x79d798u: goto label_79d798;
        default: break;
    }

    ctx->pc = 0x79d778u;

    // 0x79d778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79d778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79d77c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x79d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x79d780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79d780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79d784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d788: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x79d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x79d78c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x79d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x79d790: 0xc1e72c2  jal         func_79CB08
    ctx->pc = 0x79D790u;
    SET_GPR_U32(ctx, 31, 0x79D798u);
    ctx->pc = 0x79D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D790u;
    // 0x79d794: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79D790u, 0x79D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D798u;
label_79d798:
    // 0x79d798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79d798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x79D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D79Cu;
        // 0x79d7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D7A4u;
    // 0x79d7a4: 0x0  nop
    ctx->pc = 0x79d7a4u;
    // NOP
    ctx->pc = 0x79d7a8u;
}
} // namespace gh_r501
