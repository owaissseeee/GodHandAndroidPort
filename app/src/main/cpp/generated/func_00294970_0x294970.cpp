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

// Function: func_00294970
// Address: 0x294970 - 0x294998
void func_00294970_0x294970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294970_0x294970");
#endif

    ctx->pc = 0x294970u;

    // 0x294970: 0xc4810544  lwc1        $f1, 0x544($a0)
    ctx->pc = 0x294970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294978: 0x0  nop
    ctx->pc = 0x294978u;
    // NOP
    // 0x29497c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29497cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294980: 0x0  nop
    ctx->pc = 0x294980u;
    // NOP
    // 0x294984: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x294984u;
    {
        const bool branch_taken_0x294984 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294984u;
        // 0x294988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294984) {
            ctx->pc = 0x294990u;
            goto label_294990;
        }
    }
    ctx->pc = 0x29498Cu;
    // 0x29498c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29498cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294990:
    // 0x294990: 0x3e00008  jr          $ra
    ctx->pc = 0x294990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294998u;
}
