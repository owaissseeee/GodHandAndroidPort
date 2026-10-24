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

// Function: func_00273EB8
// Address: 0x273eb8 - 0x273ee0
void func_00273EB8_0x273eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273EB8_0x273eb8");
#endif

    ctx->pc = 0x273eb8u;

    // 0x273eb8: 0xc4811720  lwc1        $f1, 0x1720($a0)
    ctx->pc = 0x273eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ec0: 0x0  nop
    ctx->pc = 0x273ec0u;
    // NOP
    // 0x273ec4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ec8: 0x0  nop
    ctx->pc = 0x273ec8u;
    // NOP
    // 0x273ecc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x273ECCu;
    {
        const bool branch_taken_0x273ecc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ECCu;
        // 0x273ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ecc) {
            ctx->pc = 0x273ED8u;
            goto label_273ed8;
        }
    }
    ctx->pc = 0x273ED4u;
    // 0x273ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273ed8:
    // 0x273ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x273ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273EE0u;
}
