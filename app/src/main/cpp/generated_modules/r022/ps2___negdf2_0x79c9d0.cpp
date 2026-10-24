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
// Function: __negdf2
// Address: 0x79c9d0 - 0x79ca08
void ps2___negdf2_0x79c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negdf2_0x79c9d0");
#endif

    switch (ctx->pc) {
        case 0x79c9e8u: goto label_79c9e8;
        case 0x79c9fcu: goto label_79c9fc;
        default: break;
    }

    ctx->pc = 0x79c9d0u;

    // 0x79c9d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79c9d4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79c9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79c9d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c9dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79c9e0: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C9E0u;
    SET_GPR_U32(ctx, 31, 0x79C9E8u);
    ctx->pc = 0x79C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C9E0u;
    // 0x79c9e4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C9E0u, 0x79C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C9E8u;
label_79c9e8:
    // 0x79c9e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c9ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c9f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79c9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79c9f4: 0xc1e6f66  jal         func_79BD98
    ctx->pc = 0x79C9F4u;
    SET_GPR_U32(ctx, 31, 0x79C9FCu);
    ctx->pc = 0x79C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C9F4u;
    // 0x79c9f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD98u, 0x79C9F4u, 0x79C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C9FCu;
label_79c9fc:
    // 0x79c9fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ca00: 0x3e00008  jr          $ra
    ctx->pc = 0x79CA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA00u;
        // 0x79ca04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CA08u;
}
} // namespace gh_r022
