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

// Function: func_0026F1D8
// Address: 0x26f1d8 - 0x26f200
void func_0026F1D8_0x26f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026F1D8_0x26f1d8");
#endif

    ctx->pc = 0x26f1d8u;

    // 0x26f1d8: 0xc48117cc  lwc1        $f1, 0x17CC($a0)
    ctx->pc = 0x26f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f1e0: 0x0  nop
    ctx->pc = 0x26f1e0u;
    // NOP
    // 0x26f1e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26f1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f1e8: 0x0  nop
    ctx->pc = 0x26f1e8u;
    // NOP
    // 0x26f1ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x26F1ECu;
    {
        const bool branch_taken_0x26f1ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1ECu;
        // 0x26f1f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1ec) {
            ctx->pc = 0x26F1F8u;
            goto label_26f1f8;
        }
    }
    ctx->pc = 0x26F1F4u;
    // 0x26f1f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f1f8:
    // 0x26f1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x26F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F200u;
}
