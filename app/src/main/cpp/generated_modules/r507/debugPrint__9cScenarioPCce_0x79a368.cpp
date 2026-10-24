#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: debugPrint__9cScenarioPCce
// Address: 0x79a368 - 0x79a3a0
void debugPrint__9cScenarioPCce_0x79a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugPrint__9cScenarioPCce_0x79a368");
#endif

    ctx->pc = 0x79a368u;

    // 0x79a368: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a36c: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x79a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x79a370: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x79a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x79a374: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x79a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x79a378: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x79a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x79a37c: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x79a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x79a380: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x79a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x79a384: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79a384u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79a388: 0xe7ae0034  swc1        $f14, 0x34($sp)
    ctx->pc = 0x79a388u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x79a38c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x79a38cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79a390: 0xe7b2003c  swc1        $f18, 0x3C($sp)
    ctx->pc = 0x79a390u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x79a394: 0x3e00008  jr          $ra
    ctx->pc = 0x79A394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A39Cu;
    // 0x79a39c: 0x0  nop
    ctx->pc = 0x79a39cu;
    // NOP
    ctx->pc = 0x79a3a0u;
}
} // namespace gh_r507
