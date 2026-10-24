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
// Function: DeleteCannonBall__15cR301CannonGameUs
// Address: 0x79c978 - 0x79c9b0
void DeleteCannonBall__15cR301CannonGameUs_0x79c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteCannonBall__15cR301CannonGameUs_0x79c978");
#endif

    switch (ctx->pc) {
        case 0x79c9a4u: goto label_79c9a4;
        default: break;
    }

    ctx->pc = 0x79c978u;

    // 0x79c978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79c97c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x79c97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x79c980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c984: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x79c984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c988: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C988u;
    {
        const bool branch_taken_0x79c988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C988u;
        // 0x79c98c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c988) {
            ctx->pc = 0x79C9A4u;
            goto label_79c9a4;
        }
    }
    ctx->pc = 0x79C990u;
    // 0x79c990: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x79c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79c994: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x79c994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79c998: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x79c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x79c99c: 0xc1e6ca8  jal         func_79B2A0
    ctx->pc = 0x79C99Cu;
    SET_GPR_U32(ctx, 31, 0x79C9A4u);
    ctx->pc = 0x79C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C99Cu;
    // 0x79c9a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A0u, 0x79C99Cu, 0x79C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C9A4u;
label_79c9a4:
    // 0x79c9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9A8u;
        // 0x79c9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C9B0u;
}
} // namespace gh_r301
