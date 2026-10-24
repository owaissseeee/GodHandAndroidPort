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

// Function: DebugPrintfWrapper
// Address: 0x2e0da8 - 0x2e0de8
void DebugPrintfWrapper_0x2e0da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DebugPrintfWrapper_0x2e0da8");
#endif

    switch (ctx->pc) {
        case 0x2e0ddcu: goto label_2e0ddc;
        default: break;
    }

    ctx->pc = 0x2e0da8u;

    // 0x2e0da8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e0da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e0dac: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x2e0dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x2e0db0: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x2e0db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x2e0db4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2e0db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0dbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e0dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0dc0: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x2e0dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x2e0dc4: 0x27aa0058  addiu       $t2, $sp, 0x58
    ctx->pc = 0x2e0dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2e0dc8: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x2e0dc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e0dcc: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e0dccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e0dd0: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x2e0dd0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e0dd4: 0xc0b8320  jal         func_2E0C80
    ctx->pc = 0x2E0DD4u;
    SET_GPR_U32(ctx, 31, 0x2E0DDCu);
    ctx->pc = 0x2E0DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0DD4u;
    // 0x2e0dd8: 0xe7b20054  swc1        $f18, 0x54($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C80u, 0x2E0DD4u, 0x2E0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DDCu;
label_2e0ddc:
    // 0x2e0ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DE0u;
        // 0x2e0de4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DE8u;
}
