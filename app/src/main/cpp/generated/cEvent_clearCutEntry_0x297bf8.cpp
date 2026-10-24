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

// Function: cEvent_clearCutEntry
// Address: 0x297bf8 - 0x297c20
void cEvent_clearCutEntry_0x297bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_clearCutEntry_0x297bf8");
#endif

    ctx->pc = 0x297bf8u;

    // 0x297bf8: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x297bf8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297BF8u) & 0xFFFFu)) << 16));
    // 0x297bfc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x297bfcu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297BFCu) & 0xFFFFu))));
    // 0x297c00: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x297c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x297c04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x297c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x297c08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x297c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x297c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297c10: 0x3e00008  jr          $ra
    ctx->pc = 0x297C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C10u;
        // 0x297c14: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C18u;
    // 0x297c18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x297c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x297c1c: 0x0  nop
    ctx->pc = 0x297c1cu;
    // NOP
    ctx->pc = 0x297c20u;
}
