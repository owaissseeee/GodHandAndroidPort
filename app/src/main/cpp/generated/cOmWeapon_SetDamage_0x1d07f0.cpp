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

// Function: cOmWeapon_SetDamage
// Address: 0x1d07f0 - 0x1d0818
void cOmWeapon_SetDamage_0x1d07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_SetDamage_0x1d07f0");
#endif

    ctx->pc = 0x1d07f0u;

    // 0x1d07f0: 0x8c820668  lw          $v0, 0x668($a0)
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
    // 0x1d07f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d07f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D07F8u;
    {
        const bool branch_taken_0x1d07f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07F8u;
        // 0x1d07fc: 0xac820668  sw          $v0, 0x668($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07f8) {
            ctx->pc = 0x1D0808u;
            goto label_1d0808;
        }
    }
    ctx->pc = 0x1D0800u;
    // 0x1d0800: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0800u;
        // 0x1d0804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0808u;
label_1d0808:
    // 0x1d0808: 0xac800668  sw          $zero, 0x668($a0)
    ctx->pc = 0x1d0808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1640), GPR_U32(ctx, 0));
    // 0x1d080c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D080Cu;
        // 0x1d0810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0814u;
    // 0x1d0814: 0x0  nop
    ctx->pc = 0x1d0814u;
    // NOP
    ctx->pc = 0x1d0818u;
}
