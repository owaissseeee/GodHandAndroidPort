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

// Function: cHeatSys_GetHeatLv
// Address: 0x2a9bc0 - 0x2a9bf0
void cHeatSys_GetHeatLv_0x2a9bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_GetHeatLv_0x2a9bc0");
#endif

    ctx->pc = 0x2a9bc0u;

    // 0x2a9bc0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2a9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9bc4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2a9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9bc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9bcc: 0x0  nop
    ctx->pc = 0x2a9bccu;
    // NOP
    // 0x2a9bd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9BD0u;
    {
        const bool branch_taken_0x2a9bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BD0u;
        // 0x2a9bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bd0) {
            ctx->pc = 0x2A9BE0u;
            goto label_2a9be0;
        }
    }
    ctx->pc = 0x2A9BD8u;
    // 0x2a9bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9BD8u;
    {
        const bool branch_taken_0x2a9bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BD8u;
        // 0x2a9bdc: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bd8) {
            ctx->pc = 0x2A9BE4u;
            goto label_2a9be4;
        }
    }
    ctx->pc = 0x2A9BE0u;
label_2a9be0:
    // 0x2a9be0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2a9be4:
    // 0x2a9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BE4u;
        // 0x2a9be8: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9BECu;
    // 0x2a9bec: 0x0  nop
    ctx->pc = 0x2a9becu;
    // NOP
    ctx->pc = 0x2a9bf0u;
}
