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

// Function: cOmItem_setScrCheck
// Address: 0x1c25c8 - 0x1c25f0
void cOmItem_setScrCheck_0x1c25c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmItem_setScrCheck_0x1c25c8");
#endif

    ctx->pc = 0x1c25c8u;

    // 0x1c25c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25cc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C25CCu;
    {
        const bool branch_taken_0x1c25cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25CCu;
        // 0x1c25d0: 0x90820676  lbu         $v0, 0x676($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1654)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25cc) {
            ctx->pc = 0x1C25E0u;
            goto label_1c25e0;
        }
    }
    ctx->pc = 0x1C25D4u;
    // 0x1c25d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c25d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c25d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25D8u;
        // 0x1c25dc: 0xa0820676  sb          $v0, 0x676($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25E0u;
label_1c25e0:
    // 0x1c25e0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1c25e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x1c25e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25E4u;
        // 0x1c25e8: 0xa0820676  sb          $v0, 0x676($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25ECu;
    // 0x1c25ec: 0x0  nop
    ctx->pc = 0x1c25ecu;
    // NOP
    ctx->pc = 0x1c25f0u;
}
