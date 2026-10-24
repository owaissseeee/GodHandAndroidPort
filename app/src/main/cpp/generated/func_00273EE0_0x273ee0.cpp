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

// Function: func_00273EE0
// Address: 0x273ee0 - 0x273f08
void func_00273EE0_0x273ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273EE0_0x273ee0");
#endif

    ctx->pc = 0x273ee0u;

    // 0x273ee0: 0xc4811724  lwc1        $f1, 0x1724($a0)
    ctx->pc = 0x273ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ee8: 0x0  nop
    ctx->pc = 0x273ee8u;
    // NOP
    // 0x273eec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ef0: 0x0  nop
    ctx->pc = 0x273ef0u;
    // NOP
    // 0x273ef4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x273EF4u;
    {
        const bool branch_taken_0x273ef4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EF4u;
        // 0x273ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ef4) {
            ctx->pc = 0x273F00u;
            goto label_273f00;
        }
    }
    ctx->pc = 0x273EFCu;
    // 0x273efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273f00:
    // 0x273f00: 0x3e00008  jr          $ra
    ctx->pc = 0x273F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273F08u;
}
