#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: debugPrint__9cScenarioPCce
// Address: 0x79bef0 - 0x79bf28
void debugPrint__9cScenarioPCce_0x79bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugPrint__9cScenarioPCce_0x79bef0");
#endif

    ctx->pc = 0x79bef0u;

    // 0x79bef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79bef4: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x79bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x79bef8: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x79bef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x79befc: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x79befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x79bf00: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x79bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x79bf04: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x79bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x79bf08: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x79bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x79bf0c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79bf0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79bf10: 0xe7ae0034  swc1        $f14, 0x34($sp)
    ctx->pc = 0x79bf10u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x79bf14: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x79bf14u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79bf18: 0xe7b2003c  swc1        $f18, 0x3C($sp)
    ctx->pc = 0x79bf18u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x79bf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF1Cu;
        // 0x79bf20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF24u;
    // 0x79bf24: 0x0  nop
    ctx->pc = 0x79bf24u;
    // NOP
    ctx->pc = 0x79bf28u;
}
} // namespace gh_r505
