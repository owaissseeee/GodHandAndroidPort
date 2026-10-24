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

// Function: func_001D0AE0
// Address: 0x1d0ae0 - 0x1d0b08
void func_001D0AE0_0x1d0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0AE0_0x1d0ae0");
#endif

    ctx->pc = 0x1d0ae0u;

    // 0x1d0ae0: 0xc481066c  lwc1        $f1, 0x66C($a0)
    ctx->pc = 0x1d0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0ae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0ae8: 0x0  nop
    ctx->pc = 0x1d0ae8u;
    // NOP
    // 0x1d0aec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d0aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0af0: 0x0  nop
    ctx->pc = 0x1d0af0u;
    // NOP
    // 0x1d0af4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0AF4u;
    {
        const bool branch_taken_0x1d0af4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AF4u;
        // 0x1d0af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0af4) {
            ctx->pc = 0x1D0B00u;
            goto label_1d0b00;
        }
    }
    ctx->pc = 0x1D0AFCu;
    // 0x1d0afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b00:
    // 0x1d0b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B08u;
}
