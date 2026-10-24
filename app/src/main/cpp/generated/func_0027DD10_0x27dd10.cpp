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

// Function: func_0027DD10
// Address: 0x27dd10 - 0x27dd38
void func_0027DD10_0x27dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DD10_0x27dd10");
#endif

    ctx->pc = 0x27dd10u;

    // 0x27dd10: 0xc48015b4  lwc1        $f0, 0x15B4($a0)
    ctx->pc = 0x27dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd14: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x27dd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd18: 0x0  nop
    ctx->pc = 0x27dd18u;
    // NOP
    // 0x27dd1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27DD1Cu;
    {
        const bool branch_taken_0x27dd1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dd1c) {
            ctx->pc = 0x27DD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DD1Cu;
            // 0x27dd20: 0xe48c15b4  swc1        $f12, 0x15B4($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5556), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DD24u;
            goto label_27dd24;
        }
    }
    ctx->pc = 0x27DD24u;
label_27dd24:
    // 0x27dd24: 0x3e00008  jr          $ra
    ctx->pc = 0x27DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DD2Cu;
    // 0x27dd2c: 0x0  nop
    ctx->pc = 0x27dd2cu;
    // NOP
    // 0x27dd30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27dd34: 0x0  nop
    ctx->pc = 0x27dd34u;
    // NOP
    ctx->pc = 0x27dd38u;
}
