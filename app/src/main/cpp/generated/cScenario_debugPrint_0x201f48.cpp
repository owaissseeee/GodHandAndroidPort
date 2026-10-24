#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cScenario_debugPrint
// Address: 0x201f48 - 0x201f80
void cScenario_debugPrint_0x201f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_debugPrint_0x201f48");
#endif

    ctx->pc = 0x201f48u;

    // 0x201f48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x201f4c: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x201f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x201f50: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x201f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x201f54: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x201f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x201f58: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x201f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x201f5c: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x201f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x201f60: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x201f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x201f64: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x201f64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x201f68: 0xe7ae0034  swc1        $f14, 0x34($sp)
    ctx->pc = 0x201f68u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x201f6c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x201f6cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x201f70: 0xe7b2003c  swc1        $f18, 0x3C($sp)
    ctx->pc = 0x201f70u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x201f74: 0x3e00008  jr          $ra
    ctx->pc = 0x201F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F74u;
        // 0x201f78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F7Cu;
    // 0x201f7c: 0x0  nop
    ctx->pc = 0x201f7cu;
    // NOP
    ctx->pc = 0x201f80u;
}
