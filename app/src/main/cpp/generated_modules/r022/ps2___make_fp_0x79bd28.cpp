#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __make_fp
// Address: 0x79bd28 - 0x79bd58
void ps2___make_fp_0x79bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x79bd28");
#endif

    switch (ctx->pc) {
        case 0x79bd48u: goto label_79bd48;
        default: break;
    }

    ctx->pc = 0x79bd28u;

    // 0x79bd28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79bd2c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x79bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x79bd30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79bd34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79bd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd38: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x79bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x79bd3c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x79bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x79bd40: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79BD40u;
    SET_GPR_U32(ctx, 31, 0x79BD48u);
    ctx->pc = 0x79BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD40u;
    // 0x79bd44: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79BD40u, 0x79BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD48u;
label_79bd48:
    // 0x79bd48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD4Cu;
        // 0x79bd50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD54u;
    // 0x79bd54: 0x0  nop
    ctx->pc = 0x79bd54u;
    // NOP
    ctx->pc = 0x79bd58u;
}
} // namespace gh_r022
