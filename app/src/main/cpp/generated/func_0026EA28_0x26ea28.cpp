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

// Function: func_0026EA28
// Address: 0x26ea28 - 0x26ea50
void func_0026EA28_0x26ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026EA28_0x26ea28");
#endif

    ctx->pc = 0x26ea28u;

    // 0x26ea28: 0xc48116c0  lwc1        $f1, 0x16C0($a0)
    ctx->pc = 0x26ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ea2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ea30: 0x0  nop
    ctx->pc = 0x26ea30u;
    // NOP
    // 0x26ea34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ea34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea38: 0x0  nop
    ctx->pc = 0x26ea38u;
    // NOP
    // 0x26ea3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x26EA3Cu;
    {
        const bool branch_taken_0x26ea3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA3Cu;
        // 0x26ea40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea3c) {
            ctx->pc = 0x26EA48u;
            goto label_26ea48;
        }
    }
    ctx->pc = 0x26EA44u;
    // 0x26ea44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ea44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ea48:
    // 0x26ea48: 0x3e00008  jr          $ra
    ctx->pc = 0x26EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EA50u;
}
