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

// Function: cOmItem_setGetRangeLong
// Address: 0x1c25a0 - 0x1c25c8
void cOmItem_setGetRangeLong_0x1c25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmItem_setGetRangeLong_0x1c25a0");
#endif

    ctx->pc = 0x1c25a0u;

    // 0x1c25a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25a4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C25A4u;
    {
        const bool branch_taken_0x1c25a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25A4u;
        // 0x1c25a8: 0x90820676  lbu         $v0, 0x676($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1654)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25a4) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C25ACu;
    // 0x1c25ac: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c25b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25B0u;
        // 0x1c25b4: 0xa0820676  sb          $v0, 0x676($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x1c25b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x1c25bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25BCu;
        // 0x1c25c0: 0xa0820676  sb          $v0, 0x676($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25C4u;
    // 0x1c25c4: 0x0  nop
    ctx->pc = 0x1c25c4u;
    // NOP
    ctx->pc = 0x1c25c8u;
}
